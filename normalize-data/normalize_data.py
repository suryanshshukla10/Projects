#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Apr  2 11:44:11 2020

@author: suryanshshukla
"""

import numpy as np
import matplotlib.pyplot as plt
import stat 
import math
X = np.array([1,2,3,1112,11,12,12,13,13,144,1231,1321.1231,12,14,15,98,102,2,178])

def CalMean(a):
    Summation = sum(a)
    n = len(a)
    result = Summation/n
    return result

mu = CalMean(X)

def Variance(a):
    Ex2 = np.array([])
    for i in a:
        Ex2 = np.append(Ex2,i*i)
    n = len(Ex2)
    result = sum(Ex2)/n - CalMean(a)**2
    return result 


#Z = X - mu / sigma

def SD(a):
    var = Variance(a)
    result = math.sqrt(var)
    return result 

def normalize(a):
    Xmax = max(a)
    Xmin = min(a)
    norZ = np.array([])
    p = Xmax - Xmin
    for x in a:    
        y = (x - Xmin)/p
        norZ = np.append(norZ, y)
    return norZ



f, (ax1,ax2) = plt.subplots(1,2)

ax1.plot(X)
ax2.plot(normalize(X))

plt.show()
print("Complete")