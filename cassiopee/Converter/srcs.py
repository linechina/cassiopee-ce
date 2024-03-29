import KCore.Dist as Dist
from KCore.config import *
(hdf, hdfIncDir, hdfLibDir) = Dist.checkHdf(additionalLibPaths,
                                            additionalIncludePaths)
(png, pngIncDir, pngLibDir) = Dist.checkPng(additionalLibPaths,
                                            additionalIncludePaths)

#==============================================================================
# Fichiers c++
#==============================================================================
cpp_srcs =  ['Converter/Converter1.cpp',
             'Converter/copy.cpp',
             'Converter/extractVars.cpp',
             'Converter/initVars.cpp',
             'Converter/addVars.cpp',
             'Converter/randomizeVar.cpp',
             'Converter/Converter7.cpp',
             'Converter/ediff.cpp',
             'Converter/norm.cpp',
             'Converter/normalize.cpp',
             'Converter/magnitude.cpp',
             'Converter/convertBAR2Struct.cpp',
             'Converter/convertStruct2Tetra.cpp',
             'Converter/convertStruct2TetraBary.cpp',
             'Converter/convertStruct2Hexa.cpp',
             'Converter/convertStruct2NGon.cpp',
             'Converter/convertHexa2Struct.cpp',
             'Converter/convertUnstruct2NGon.cpp',
             'Converter/convertUnstruct2Hexa.cpp',
             'Converter/convertHexa2Tetra.cpp',
             'Converter/convertPrism2Tetra.cpp',
             'Converter/convertPyra2Tetra.cpp',
             'Converter/convertNGon2TetraBary.cpp',
             'Converter/convertArray2TetraBary.cpp',
             'Converter/convertTri2Quad.cpp',
             'Converter/convertQuad2Tri.cpp',
             'Converter/center2Node.cpp',
             'Converter/node2Center.cpp',
             'Converter/node2ExtCenter.cpp',
             'Converter/extCenter2Node.cpp',
             'Converter/center2ExtCenter.cpp',
             'Converter/convertFilePyTree.cpp',
             'Converter/setPartialFields.cpp',
             'Converter/IO/DynArrayIO.cpp',
             'Converter/IO/GenIO.cpp',
             'Converter/IO/GenIO_endian.cpp',
             'Converter/IO/GenIO_fmt.cpp',
             'Converter/IO/GenIO_fmttp.cpp',
             'Converter/IO/GenIO_fmtv3d.cpp',
             'Converter/IO/GenIO_fmtpov.cpp',
             'Converter/IO/GenIO_fmtmesh.cpp',
             'Converter/IO/GenIO_fmtgmsh.cpp',
             'Converter/IO/GenIO_bingmsh.cpp',
             'Converter/IO/GenIO_fmtobj.cpp',
             'Converter/IO/GenIO_binstl.cpp',
             'Converter/IO/GenIO_binply.cpp',
             'Converter/IO/GenIO_fmtstl.cpp',
             'Converter/IO/GenIO_bin3ds.cpp',
             'Converter/IO/GenIO_bintp.cpp',
             'Converter/IO/GenIO_bince.cpp',
             'Converter/IO/GenIO_fmtplot3d.cpp',
             'Converter/IO/GenIO_binplot3d.cpp',
             'Converter/IO/GenIO_bintp108.cpp',
             'Converter/IO/GenIO_bintp75.cpp',
             'Converter/IO/GenIO_binv3d.cpp',
             'Converter/IO/GenIO_bindf3.cpp',
             'Converter/IO/GenIO_binwav.cpp',
             'Converter/IO/GenIO_fmtxfig.cpp',
             'Converter/IO/GenIO_fmtsvg.cpp',
             'Converter/IO/GenIO_fmtgts.cpp',
             'Converter/IO/GenIO_fmtiges.cpp',
             'Converter/IO/GenIO_fmtcedre.cpp',
             'Converter/IO/GenIO_fmtSU2.cpp',
             'Converter/IO/GenIO_createElts.cpp',
             'Converter/IO/GenIO_cplot.cpp',
             'Converter/IO/GenIO_fmttgf.cpp',
             'Converter/IO/getBCFaces.cpp',
             'Converter/IO/convertPyTree2FFD.cpp',
             'Converter/cpyGhost2Real.cpp',
             'Converter/convertArray2Node.cpp',
             'Converter/detectEmptyBC.cpp',
             'Converter/tagDefinedBC.cpp',
             'Converter/fillJoin.cpp',
             'Converter/fillJoinNM.cpp',
             'Converter/fillCornerGhostCells.cpp',
             'Converter/fillCornerGhostCells2.cpp',
             'Converter/getBorderIndices.cpp',
             'Converter/getJoinDonorIndices.cpp',
             'Converter/conformizeNGon.cpp',
             'Converter/conformizeNGon1.cpp',
             'Converter/identify.cpp',
             'Converter/nearest.cpp',
             'Converter/identifySolutions.cpp',
             'Converter/hook.cpp',
             'Converter/globalHook.cpp',
             'Converter/ADF/ADF_interface.cpp',
             'Converter/ADF/ADF_internals.cpp',
             'Converter/ADF/cgns_io.cpp',
             'Converter/addGhostCellsNGon.cpp',
             'Converter/rmGhostCellsNGon.cpp',
             'Converter/Adapter/adaptPE2NFace.cpp',
             'Converter/Adapter/adaptNFace2PE.cpp',
             'Converter/Adapter/adaptBCFace2BCC.cpp',
             'Converter/Adapter/adaptBCC2BCFace.cpp',
             'Converter/Adapter/adaptNGon2Index.cpp',
             'Converter/Adapter/adaptNFace2Index.cpp',
             'Converter/Adapter/adapt2FastP.cpp',
             'Converter/Adapter/createElsaHybrid.cpp',
             'Converter/Adapter/diffIndex.cpp',
             'Converter/setBCDataInGhostCells.cpp',
             'Converter/extrapInterior2BCFace.cpp',
             'Converter/nullifyVectorAtBCFace.cpp'
             ]
cpp_srcs += ['Converter/IO/GenIO_adfcgns.cpp']

#import glob
#h5files = glob.glob('Converter/HDF/*.c')
#cpp_srcs += h5files

if hdf:
    cpp_srcs += ['Converter/IO/GenIO_hdfcgns.cpp']
else:
    cpp_srcs += ['Converter/IO/GenIO_hdfcgns_stub.cpp']

if png:
    cpp_srcs += ['Converter/IO/GenIO_binpng.cpp']
else:
    cpp_srcs += ['Converter/IO/GenIO_binpng_stub.cpp']

#==============================================================================
# Fichiers fortran
#==============================================================================
for_srcs = ['Converter/Fortran/WriteBCFileF.for',
            'Converter/Fortran/WriteGridF.for',
            'Converter/Fortran/WriteGridHeadF.for',
            'Converter/Fortran/WriteGridF.for',
            'Converter/Fortran/WriteIBFileF.for',
            'Converter/Fortran/WriteFFDFileF.for']

#==============================================================================
# Module pyx
#==============================================================================
#pyx_srcs = ['Converter/Layout/dummy.pyx']
