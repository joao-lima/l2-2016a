# -*- coding: utf-8 -*-
# Programa : Calcula uma funcao linear

import math
import matplotlib.pyplot as pyplot

# y <- a*x + b
def linear(x, a, b):
   return a*x + b

x = -2.0
while x <= 2.0:
   y = linear(x, 1.0, 3.0)
   pyplot.plot(x, y, 'r.')
   x = x + 0.1
   
pyplot.show()

