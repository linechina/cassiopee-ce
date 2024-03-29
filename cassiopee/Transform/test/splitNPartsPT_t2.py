# - splitNParts (pyTree) -
import Generator.PyTree as G
import Transform.PyTree as T
import Converter.PyTree as C
import KCore.test as test

# BC are not recovered
# Structure + Champs + CL
a = G.cart((0,0,0),(1,1,1),(50,20,10))
a = C.addBC2Zone(a, 'wall1', 'BCWall', 'imin')
a = C.addBC2Zone(a, 'overlap1', 'BCOverlap', 'jmin')
a = C.addBC2Zone(a, 'match1', 'BCMatch', 'imax', a, 'imin', [1,2,3])
C._initVars(a, 'centers:cellN=1.')
t = C.newPyTree(['Base',a])
t = T.splitNParts(t, 4, multigrid=0, dirs=[1,2,3], recoverBC=0)
test.testT(t, 1)

# 2D Structure + Champs + CL
a = G.cart((0,0,0),(1,1,1),(50,20,2))
a = C.addBC2Zone(a, 'wall1', 'BCWall', 'imin')
a = C.addBC2Zone(a, 'overlap1', 'BCOverlap', 'jmin')
a = C.addBC2Zone(a, 'match1', 'BCMatch', 'imax', a, 'imin', [1,2])
C._initVars(a, 'centers:cellN',1)
t = C.newPyTree(['Base',a])
t = T.splitNParts(t, 4, multigrid=0, dirs=[1,2,3],recoverBC=0)
test.testT(t,2)

a = G.cart((0,0,0), (1,1,1), (81,81,81))
b = G.cart((80,0,0), (1,1,1), (41,81,41))
t = C.newPyTree(['Base']); t[2][1][2] = [a,b]
t = T.splitNParts(t, 10, multigrid=0, dirs=[1,2,3],recoverBC=0)
test.testT(t,3)

a = G.cart((0,0,0), (1,1,1), (81,81,81))
b = G.cartNGon((80,0,0), (1,1,1), (41,81,41))
t = C.newPyTree(['Base']); t[2][1][2] = [a,b]
t = T.splitNParts(t, 10, multigrid=0, dirs=[1,2,3],recoverBC=0)
test.testT(t,4)
