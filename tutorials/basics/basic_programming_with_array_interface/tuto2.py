#!/usr/bin/env python
# coding: utf-8

r"""Tutorial 2 for Cassiopee

This tutorial shows some basics using Cassiopee array API.
The Cassiopee array interface is really close to the numpy interface.

We need first to provide access to the module functions
(here Converter and Generator):
import Converter as C
import Generator as G

Create a structured array corresponding to a regular Cartesian grid:
a = G.cart( (0,0,0), (1,1,1), (10,11,12) )

a is then a structured Cassiopee array: ['x,y,z', n, ni, nj, nk].
This is basically a python list containing a string describing the variables,
a numpy storing the data, and 3 integers denoting the number of points
in each direction.
You can easily access the numpy with:
n = a[1]
This numpy array can be then classically manipulated with numpy functions.
Convert the previous array as an HEXA unstructured array:
b = C.convertArray2Hexa(a)
It should be noted that Cassiopee array functions always return a copy of the
input array.
b is then a unstructured Cassiopee array: ['x,y,z', n, c, 'HEXA'].
This is also a python list containing a string describing the variables,
a numpy storing the data, a numpy storing the connectivity and
a string designing the type of elements.

"""

from __future__ import print_function

import Converter as C
import Generator as G
# import numpy

# Create a cartesian grid
a = G.cart((0, 0, 0), (1, 1, 1), (10, 11, 12))

# This is a structured Cassiopee array: ['x,y,z', n, ni, nj, nk]
# storing the variable string, the data as a numpy and the size of the
# grid
print(a)

# This is one way of checking type
if len(a) == 5:
    print('Structured')
else:
    print('Unstructured')

# Getting the numpy. This is a C indexed numpy array:
# n[0,ind] is x variable of index ind=i+j*ni+k*ni*nj
# n[1,ind] is y variable, and so on...
n = a[1]

# You can work on this numpy classically
n[2, :] = 2.  # put all z to 2.

# Save the array in a file
# The bracket are here because this functions requires 'arrays' meaning
# a list of Cassiopee arrays.
C.convertArrays2File([a], 'out1.plt')

# Convert it as an hexa unstructured array
# Each function returns a copy of this original array
b = C.convertArray2Hexa(a)

# b is then a unstructured Cassiopee array: ['x,y,z', n, c, 'HEXA']
# storing the variable string, the data as a numpy and the connectivity
# as a numpy and the type of elements.
print(b)

C.convertArrays2File([a, b], 'out2.plt')
