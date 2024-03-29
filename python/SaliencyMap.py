# -*- coding: utf-8 -*-
"""2017241_KANISHKRANA_HW3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1gOhqTTELqF73abENnCM1KR4-aGAmxinE
"""

import cv2 as cv
import numpy as np
from math import sqrt,exp
import matplotlib.pyplot as plt
from numba import jit
@jit
def getSaliencyValue(img,m,n,saliency_map):       
    for x in range(m):
      for y in range(n):
        I = img[x][y]
        S = 0
        a1, a2, a3 = I
        for i in range(m):
            for j in range(n):
                
                b1, b2, b3 = img[i][j]
                

                temp1=(a1-b1)**2
                temp2=(a2-b2)**2
                temp3=(a3-b3)**2
                temp4=temp1+temp2

                dist = sqrt(temp4+temp3)
                dist2 = sqrt((x-i)**2 + (y-j)**2) / sqrt(m**2 + n**2)
                S += dist * exp(-1 * dist2)
            saliency_map[x][y] = S
    return saliency_map

img =cv.imread('input.jpg')
m, n, _ = img.shape
saliency_map = np.zeros((m, n))
saliency_map = getSaliencyValue(img,m,n,saliency_map)
fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(8, 4))
ax1.imshow(img)
ax1.set_title("Original")
ax2.imshow(saliency_map,cmap='CMRmap')
ax2.set_title("After Saliency")
plt.show()

