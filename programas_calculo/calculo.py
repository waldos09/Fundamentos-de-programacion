# -*- coding: utf-8 -*-
"""
Created on Mon Dec  6 15:56:57 2021

@author: waldo
"""
import numpy as np
import matplotlib.pyplot as plt

#ingreso
fx = lambda x: x*np.sin(x)
a = 0
b = 0
tramos = 4

#pedir datos
a =int(input('ingrese el valor de a:'))
b =int(input('ingrese el valor de b:'))
tramos =int(input('ingrese el no de intervalos:'))
#procedimiento

#areas
h = (b-a)/tramos
suma = 0
xi = a
for i in range(0,tramos,1):
    atrapecio = h*(fx(xi)+fx(xi+h))/2
    suma = suma + atrapecio
    xi = xi + h
integral = suma

muestras = tramos+1
xi = np.linspace(a,b,muestras)
fi = fx(xi)

muestraslinea = muestras*10
xk = np.linspace(a,b,muestraslinea)
fk = fx(xk)
#salida
plt.plot(xi,fi, 'ro')
plt.plot(xk,fk)
print('intervalos:',tramos)
print('integral:',integral)


#trapecio
plt.fill_between(xi, (xi[0]-xi[5]), fi, color ='g')
for i in range(0,muestras,1):
    
    plt.axvline(xi[i],color='w')

plt.show()