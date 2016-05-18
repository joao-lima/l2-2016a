# -*- coding: utf-8 -*-
# Programa : Calcula distribuicao normal padrao

import math
import matplotlib.pyplot as pyplot

def normal(x, mu, sigma):
   z = 1.0*(x-mu)/sigma
   e = math.e**(-0.5*z**2)
   C = math.sqrt(2*math.pi)*sigma
   return 1.0*e/C

x = -2.0
while x <= 2.0:
   y = normal(x, 0.0, 1.0)
   pyplot.plot(x, y, 'r.')
   x = x + 0.1
   
pyplot.show()

