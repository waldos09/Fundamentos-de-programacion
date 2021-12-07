# -*- coding: utf-8 -*-
"""
Created on Mon Dec  6 16:22:06 2021

@author: waldo
"""
import numpy as np
import matplotlib.pyplot as plt

a = 1
b = 3
intervalos=2
h = (b-a)/intervalos
suma = 0

a =int(input('ingrese el valor de a:'))
b =int(input('ingrese el valor de b:'))


def f(x):
    return x*np.sin(x)

intervaloslinea = intervalos*10
x = np.linspace(a,b,intervaloslinea)
plt.plot(x,f(x))
plt.axvline((a+b)/2,color='r')
plt.show()

def simpson13(f,a,b):
    m = (a+b)/2
    integral = (b-a)/6 * (f(a)+4*f(m)+f(b))
    return integral
    
for i in range(intervalos):
    b = a +h
    area = simpson13(f, a, b)
    suma = suma + area
    a = b
    
print('el resultado de la integral es:'suma)

    



