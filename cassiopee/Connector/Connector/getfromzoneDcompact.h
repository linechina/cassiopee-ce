       PyObject* solD;  PyObject* t; PyObject* t2;
       if (loc==0) { solD = K_PYTREE::getNodeFromName1(zoneD , "FlowSolution#Centers"); }
       else        { solD = K_PYTREE::getNodeFromName1(zoneD , "FlowSolution"        ); }    
       
       PyObject* tpl0= PyList_GetItem(pyVariables, 0); char* varname = PyString_AsString(tpl0);
       
       t             = K_PYTREE::getNodeFromName1(solD, varname );
       iptroD        = K_PYTREE::getValueAF(t, hook);

       // Types valides: 0, 1, 2, 3, 4, 5 
        char* type; E_Int s, s0, s1;  E_Int* d;
        // get type
        t    =  K_PYTREE::getNodeFromName1(zoneD, "ZoneType");
        type =  K_PYTREE::getValueS(t, s, hook);
        // get dims
        d    =  K_PYTREE::getValueAI(zoneD, s0, s1, hook);

        if (K_STRING::cmp(type, s, "Structured") == 0)
         { meshtype = 1; E_Int shift = 0;// if(loc == 0) shift =1;
          if (s0 == 1) { imd= d[0+shift]; jmd=1; kmd=1; ndimdxD= imd; }
          else if (s0 == 2) { imd= d[0+shift]; jmd=d[1+shift]; kmd=1;  ndimdxD= imd*jmd; } 
          else if (s0 == 3) { imd= d[0+shift]; jmd=d[1+shift]; kmd=d[2+shift]; ndimdxD= imd*jmd*kmd; } 
         }
        else // non structure
         {
           meshtype = 2;
           imd= d[0]; imdjmd = d[0]*d[1]; ndimdxD = imdjmd; // npoint, nelements

           vector<PyObject*> ln;
           K_PYTREE::getNodesFromType1(zoneD, "Elements_t", ln);
           E_Int size = ln.size();
           //printf("size %d\n", size);
           for (E_Int i = 0; i < size; i++)
             {
              t = ln[i];
              E_Int* dtypep = K_PYTREE::getValueAI(t, hook);
              E_Int dtype = dtypep[0];
              E_Int dbnd = dtypep[1];
              //printf("dtype %d\n", dtype);
              //printf("bnd %d\n", dbnd);
              if (dbnd == 0) // non boundary
               {
                t2 = K_PYTREE::getNodeFromName1(t, "ElementConnectivity");
                E_Int* v = K_PYTREE::getValueAI(t2, s0, s1, hook);
                ptrcnd = v;
                switch (dtype)
                 {
                   case 2: // node
                     cnNfldD = 1;
                     break;
            
                   case 3: // BAR
                     cnNfldD = 1;
                     break;

                   case 5: // TRI
                     cnNfldD = 3;
                     break;
            
                   case 7: // QUAD
                     cnNfldD = 4;
                     break;
            
                   case 10: // TETRA
                     cnNfldD = 4;
                     break;
            
                   case 12: // PYRA  
                     cnNfldD = 5;
                     break;
            
                   case 14: // PENTA 
                     cnNfldD = 6;
                     break;
            
                   case 17: //HEXA
                     cnNfldD = 8;
                     break;
            
                   case 20: // MIXED
                     cnNfldD = 1;
                     ptrcnd  = NULL;
                     break;
            
                   case 22: // NGOND
                     cnNfldD = 1;
                     break;
            
                   case 23: // NFACE
                     cnNfldD = s0;
                     ptrcnd  = NULL;
                     break;
            
                   default: break;
                 }
               }
             }
         }
