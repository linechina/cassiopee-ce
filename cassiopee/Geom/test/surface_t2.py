# - surface (array) -
# surfaces parametriques predefinies
import Geom as D
import KCore.test as test
import Converter as C
from Geom.Parametrics import base

a = D.surface(base['plane'], N=100)
test.testA([a],1)
a = D.surface(base['klein'], N=100)
test.testA([a],2)
a = D.surface(base['shell'], N=100)
test.testA([a],3)
a = D.surface(base['torus'], N=100)
test.testA([a],4)
a = D.surface(base['cosinus'], N=100)
test.testA([a],5)
a = D.surface(base['moebius'], N=100)
test.testA([a],6)
a = D.surface(base['riemann'], N=100)
test.testA([a],7)
a = D.surface(base['klein2'], N=100)
test.testA([a],8)
a = D.surface(base['enneper'], N=100)
test.testA([a],9)
a = D.surface(base['helix'], N=100)
test.testA([a],10)
a = D.surface(base['hexahedron'], N=100)
test.testA([a],11)
a = D.surface(base['sphere'], N=100)
test.testA([a],12)
a = D.surface(base['catalan'], N=100)
test.testA([a],13)
a = D.surface(base['toupie'], N=100)
test.testA([a],14)
a = D.surface(base['trumpet'], N=100)
test.testA([a],15)
a = D.surface(base['bonbon'], N=100)
test.testA([a],16)
a = D.surface(base['helicoidal'], N=100)
test.testA([a],17)
a = D.surface(base['horn'], N=100)
test.testA([a],18)
a = D.surface(base['steiner'], N=100)
test.testA([a],19)
a = D.surface(base['crosscap'], N=100)
test.testA([a],20)
a = D.surface(base['cliffordtorus'], N=100)
test.testA([a],21)
a = D.surface(base['enneper2'], N=100)
test.testA([a],22)
a = D.surface(base['dini'], N=100)
test.testA([a],23)
a = D.surface(base['drop'], N=100)
test.testA([a],24)
test.writeCoverage(100)