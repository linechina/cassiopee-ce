/*
    Copyright 2013-2017 Onera.

    This file is part of Cassiopee.

    Cassiopee is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Cassiopee is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Cassiopee.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _CONVERTER_CONVERTER_H_
#define _CONVERTER_CONVERTER_H_

# include "kcore.h"
namespace K_CONVERTER
{
  // # define SORTHOOK
  PyObject* setBCDataInGhostCellsStruct(PyObject* self, PyObject* args);
  PyObject* extrapInterior2BCFaceStruct(PyObject* self, PyObject* args);
  PyObject* nullifyVectorAtBCFaceStruct(PyObject* self, PyObject* args);
  PyObject* setPartialFields(PyObject* self, PyObject* args);
  PyObject* _setPartialFields(PyObject* self, PyObject* args);
  PyObject* setPartialFieldsPT(PyObject* self, PyObject* args);
  PyObject* extractVars(PyObject* self, PyObject* args);
  PyObject* addVar(PyObject* self, PyObject* args);
  PyObject* addVars(PyObject* self, PyObject* args);
  PyObject* initVars(PyObject* self, PyObject* args);
  PyObject* randomizeVar(PyObject* self, PyObject* args);
  PyObject* copy(PyObject* self, PyObject* args);
  PyObject* convertFile2Arrays(PyObject* self, PyObject* args);
  PyObject* convertArrays2File(PyObject* self, PyObject* args);
  PyObject* convertMesh2Array(PyObject* self, PyObject* args);
  PyObject* convertArray2Mesh(PyObject* self, PyObject* args);
  PyObject* convertWindow2Array(PyObject* self, PyObject* args);
  PyObject* convertArrays2Mask(PyObject* self, PyObject* args);
  PyObject* convertArray2Node(PyObject* self, PyObject* args);
  PyObject* diffArrays(PyObject* self, PyObject* args);
  PyObject* convertDesFunction2Function(PyObject* self, PyObject* args);
  PyObject* getArgMin(PyObject* self, PyObject* args);
  PyObject* getArgMax(PyObject* self, PyObject* args);
  PyObject* getMeanValue(PyObject* self, PyObject* args);
  PyObject* getMeanRangeValue(PyObject* self, PyObject* args);
  PyObject* normL0(PyObject* self, PyObject* args);
  PyObject* normL2(PyObject* self, PyObject* args);
  PyObject* normalize(PyObject* self, PyObject* args);
  PyObject* magnitude(PyObject* self, PyObject* args);
  PyObject* convertBAR2Struct(PyObject* self, PyObject* args);
  PyObject* convertStruct2Tetra(PyObject* self, PyObject* args);
  PyObject* convertStruct2TetraBary(PyObject* self, PyObject* args);
  PyObject* convertStruct2TetraBaryBoth(PyObject* self, PyObject* args);
  PyObject* convertStruct2Hexa(PyObject* self, PyObject* args);
  PyObject* convertStruct2NGon(PyObject* self, PyObject* args);
  PyObject* convertHexa2Struct(PyObject* self, PyObject* args);
  PyObject* convertUnstruct2NGon(PyObject* self, PyObject* args);
  PyObject* convertUnstruct2Hexa(PyObject* self, PyObject* args);
  PyObject* convertHexa2Tetra(PyObject* self, PyObject* args);
  PyObject* convertPenta2Tetra(PyObject* self, PyObject* args);
  PyObject* convertPyra2Tetra(PyObject* self, PyObject* args);
  PyObject* convertNGon2TetraBary(PyObject* self, PyObject* args);
  PyObject* convertNGon2TetraBaryBoth(PyObject* self, PyObject* args);
  PyObject* convertArray2TetraBary(PyObject* self, PyObject* args);
  PyObject* convertArray2TetraBaryBoth(PyObject* self, PyObject* args);
  PyObject* convertTri2Quad(PyObject* self, PyObject* args);
  PyObject* convertQuad2Tri(PyObject* self, PyObject* args);
  PyObject* center2Node(PyObject* self, PyObject* args);
  PyObject* node2Center(PyObject* self, PyObject* args);
  PyObject* node2ExtCenter(PyObject* self, PyObject* args);
  PyObject* extCenter2Node(PyObject* self, PyObject* args);
  PyObject* center2ExtCenter(PyObject* self, PyObject* args);
  PyObject* convertFile2PyTree(PyObject* self, PyObject* args);
  PyObject* convertFile2PartialPyTree(PyObject* self, PyObject* args);
  PyObject* convertPyTree2File(PyObject* self, PyObject* args);
  PyObject* convertFile2PyTreeFromPath(PyObject* self, PyObject* args);
  PyObject* convertPyTree2FilePartial(PyObject* self, PyObject* args);
  PyObject* convertPyTree2FFD(PyObject* self, PyObject* args);
  PyObject* readPyTreeFromPaths(PyObject* self, PyObject* args);
  PyObject* writePyTreePaths(PyObject* self, PyObject* args);
  PyObject* cpyGhost2Real(PyObject* self, PyObject* args);
  PyObject* cpyReal2Ghost(PyObject* self, PyObject* args);
  PyObject* cpyConnectA2ConnectP(PyObject* self, PyObject* args);
  PyObject* cpyConnectP2ConnectA(PyObject* self, PyObject* args);
  PyObject* cpyValueByField(PyObject* self, PyObject* args);
  PyObject* detectEmptyBC(PyObject* self, PyObject* args);
  PyObject* tagDefinedBC(PyObject* self, PyObject* args);
  PyObject* conformizeNGon(PyObject* self, PyObject* args);
  // Ghost cells NGON
  PyObject* addGhostCellsNGonNodes(PyObject* self, PyObject* args);
  PyObject* addGhostCellsNGonCenters(PyObject* self, PyObject* args);
  PyObject* addGhostCellsNGonBoth(PyObject* self, PyObject* args);
  PyObject* rmGhostCellsNGonNodes(PyObject* self, PyObject* args);
  PyObject* rmGhostCellsNGonCenters(PyObject* self, PyObject* args);
  PyObject* rmGhostCellsNGonBoth(PyObject* self, PyObject* args);
  // Ghost Cells structured
  PyObject* fillJoin(PyObject* self, PyObject* args);
  PyObject* fillJoinNMNodes(PyObject* self, PyObject* args);
  PyObject* fillJoinNMCenters(PyObject* self, PyObject* args);
  PyObject* fillCornerGhostCells(PyObject* self, PyObject* args);
  PyObject* fillCornerGhostCells2(PyObject* self, PyObject* args);
  PyObject* getJoinBorderIndices(PyObject* self, PyObject* args);
  PyObject* getJoinDonorIndices(PyObject* self, PyObject* args);
  // hooks
  PyObject* registerFaces(PyObject* self, PyObject* args);
  PyObject* registerCells(PyObject* self, PyObject* args);
  PyObject* registerNodes(PyObject* self, PyObject* args);
  PyObject* registerElements(PyObject* self, PyObject* args);
  // global hooks
  PyObject* registerAllFaces(PyObject* self, PyObject* args);
  PyObject* registerAllNodes(PyObject* self, PyObject* args);
  PyObject* registerAllElements(PyObject* self, PyObject* args);
  // free hook
  PyObject* freeHook(PyObject* self, PyObject* args);
  // identification
  PyObject* identifyElements(PyObject* self, PyObject* args);
  PyObject* identifyFaces(PyObject* self, PyObject* args);
  PyObject* identifyNodes(PyObject* self, PyObject* args);
  PyObject* identifySolutions( PyObject* self, PyObject* args );
  // voisin le plus proche
  PyObject* nearestElements(PyObject* self, PyObject* args);
  PyObject* nearestFaces(PyObject* self, PyObject* args);
  PyObject* nearestNodes(PyObject* self, PyObject* args);
  // Adapter
  PyObject* adaptPE2NFace(PyObject* self, PyObject* args);
  PyObject* adaptNFace2PE(PyObject* self, PyObject* args);
  PyObject* adaptNGon2Index(PyObject* self, PyObject* args);
  PyObject* adaptNFace2Index(PyObject* self, PyObject* args);
  PyObject* adaptBCFace2BCC(PyObject* self, PyObject* args);
  PyObject* adaptBCC2BCFace(PyObject* self, PyObject* args);
  PyObject* adapt2FastP(PyObject* self, PyObject* args);
  PyObject* createElsaHybrid(PyObject* self, PyObject* args);
  PyObject* diffIndex(PyObject* self, PyObject* args);

  // addGhostCells NGON
  void addGhostCellsNGon2D(E_Int depth,
                           K_FLD::FldArrayF& f, K_FLD::FldArrayI& cn,
                           E_Int neltsAdd,
                           E_Int sizeFN2, E_Int sizeEF2, std::vector<E_Int>& facesExt,
                           K_FLD::FldArrayF*& f2, K_FLD::FldArrayI*& cn2);
  void addGhostCellsNGon3D(E_Int depth,
                           K_FLD::FldArrayF& f, K_FLD::FldArrayI& cn,
                           E_Int neltsAdd,
                           E_Int sizeFN2, E_Int sizeEF2, std::vector<E_Int>& facesExt,
                           K_FLD::FldArrayF*& f2, K_FLD::FldArrayI*& cn2);

  // Conformisation topologique d'un NGON
  void conformizeNGon(K_FLD::FldArrayF& f, E_Int posx, E_Int posy, E_Int posz,
                      K_FLD::FldArrayI& cn, E_Float tol,
                      K_FLD::FldArrayI*& cno);
  // a mettre ensuite dans K_CONNECT
  void orderBAR2Struct(E_Int posx, E_Int posy, E_Int posz,
                       K_FLD::FldArrayF& f, K_FLD::FldArrayI& cn,
                       K_FLD::FldArrayF& fout);

  void tagDefinedBC2D(E_Int posd, E_Int im, E_Int jm,
                      K_FLD::FldArrayF& f, K_FLD::FldArrayI& wins);
  void tagDefinedBC3D(E_Int posd, E_Int im, E_Int jm, E_Int km,
                      K_FLD::FldArrayF& f, K_FLD::FldArrayI& wins);
  // Methods for diffArrays
  PyObject* diff2(PyObject* arrays1, PyObject* arrays2);
  PyObject* diff3(PyObject* arrays1, PyObject* arrays2, PyObject* arrays3);

  E_Int checkRecognisedFormat(char* format);

  // Method for prismatic conversion
  void buildSortedPrism(E_Int elt, K_FLD::FldArrayI& cn, E_Int& diag,
                        E_Int* indir);
  // Method for diffArrays
  E_Boolean searchField2(K_FLD::FldArrayF& f1,
                         K_FLD::FldArrayF& error,
                         std::vector<K_FLD::FldArrayF*>& field2,
                         std::vector<E_Int>& pos1,
                         std::vector<E_Int>& pos2,
                         E_Int posx1, E_Int posy1, E_Int posz1,
                         E_Int posx2, E_Int posy2, E_Int posz2,
                         E_Boolean coordPresent);

  /* Functions for detectEmptyBC */
  void detectEmptyBCrec(std::vector<E_Int*>& win,
                        E_Int ni, E_Int nj, E_Int nk, E_Int dir,
                        std::vector<E_Int*>&  nwins, K_FLD::FldArrayI*& tag,
                        E_Int size);

  // Method for building nodes indices by face
  void buildFaceIndices(char* eltType, std::vector< std::vector<E_Int> >& faces);

  // Element Type's String to Id
  E_Int getElementTypeId(const char* eltType);

  // Fonction pour FFD72
  void calculateMutsMu(E_Int nelmt, E_Float* MutsMu, E_Float* Mut, E_Float* Mu, E_Float* Density=NULL, E_Float* Densitym1=NULL);
  void putCodeBC2Elmtmtch(PyObject* zone, E_Int* ielmtmtch2, E_Int* nlimt);
  void copyPE2Elmtmtch(E_Int* p, E_Int *ielmtmtch1, E_Int *ielmtmtch2, E_Int nmtch, E_Int *nBC);
  void splitElementConnectivity(PyObject* zone, E_Int* npoint,E_Int* nodmtch,E_Int* kpoinmtch);
  void getVarBC(PyObject* zone, E_Float* Var_l, E_Int *ielmtmtch2, E_Int* nlimt);
  void scanBC(PyObject* zone, E_Int *nlimt);
}
#endif
