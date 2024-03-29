# - cart2Cyl (pyTree) -
import Transform.PyTree as T
import Generator.PyTree as G
import Converter.PyTree as C
import KCore.test as test

a = G.cylinder((0.,0.,0.), 0.5, 1., 0., 359, 1., (360,20,10))
a = C.addBC2Zone(a, 'wall1', 'BCWall', 'imin')
a = C.initVars(a, 'F', 2.); a = C.initVars(a, 'centers:G', 1.)
T._cart2Cyl(a, (0.,0.,0.),(0,0,1))
test.testT(a, 1)

a = G.cylinder((0.,0.,0.), 0.5, 1., 0., 359, 1., (360,20,10))
a = T.rotate(a,(0,0,0),(1,0,0),90.)
T._cart2Cyl(a, (0.,0.,0.),(0,1.,0))
test.testT(a,2)
