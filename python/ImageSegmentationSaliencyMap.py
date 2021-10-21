import cv2 as cv
import numpy as np
import math
import matplotlib.pyplot as plt
from skimage.segmentation import mark_boundaries
from skimage.segmentation import slic
def getSaliencyValue(img,m,n,image_segments):
    
    superpixelData = []
    for label in np.unique(image_segments):
      X, Y = np.where(image_segments == label)
      superpixelValue = np.mean(img[X, Y], axis = 0 )
      xAvg, yAvg = np.mean(X), np.mean(Y)
      
      superpixelData.append((xAvg, yAvg, superpixelValue))
    return superpixelData
def final(data,x,y,image_segments):
    SMap = np.zeros((m, n))
    SValues = []
    for data1 in data:
        S = 0
        r1, g1, b1 = data1[2]
        for data2 in data:
          r2, g2, b2 = data2[2]
          rdiff=math.pow((r1-r2),2)
          gdiff=math.pow((g1-g2),2)
          bdiff=math.pow((b1-b2),2)
          colordiff=(math.sqrt(rdiff + gdiff + bdiff))
          xCord = (data1[0]-data1[1])**2
          yCord = (data2[0]-data2[1])**2
          distancediff = -1 * math.sqrt((xCord + yCord))/math.sqrt(x**2 + y**2)
          distancediff=math.exp(distancediff)
          S = S + ( colordiff* distancediff)
        SValues.append(S)  
    i=0
    while i<(m):
        j=0
        while j<(n):  
            SMap[i][j] = SValues[image_segments[i][j]]
            j+=1
        i+=1

    return SMap
img =cv.imread('input.jpg')
x,y,c=img.shape
image_segments = slic(img,n_segments=100,compactness=10,max_iter=10,sigma=0,start_label=0)
m, n= image_segments.shape
saliency_map = getSaliencyValue(img,m,n,image_segments)
final=final(saliency_map,x,y,image_segments)
fig, (ax1, ax2,ax3) = plt.subplots(1, 3, figsize=(8, 4))
ax1.imshow(img)
ax1.set_title("Original")
ax2.imshow(mark_boundaries(img, image_segments))
ax2.set_title('Segmented Image')
ax3.imshow(final,cmap='CMRmap')
ax3.set_title("After Saliency")
plt.show()

