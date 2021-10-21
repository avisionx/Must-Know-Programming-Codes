import cv2 as cv
import math
import matplotlib.pyplot as plt
import numpy as np
import imageio
import statistics

def stats(img_part1,img_part2,img_part3):	
	
	
	mean_R, std_R = statistics.mean(img_part1), np.std(img_part1)
	mean_G, std_G = statistics.mean(img_part2), np.std(img_part2)
	mean_B, std_B = statistics.mean(img_part3), np.std(img_part3)
	temp_feature_vector = np.array([mean_R, std_R, mean_G, std_G, mean_B, std_B])
	return temp_feature_vector

def SPP(img,values,feature_vector,hlen,wlen):
	for k in range(len(values)):
		for i in range(int(values[k])):
			for j in range(int(values[k])):
				part_img = inp_img[i*hlen[k]:(i+1)*hlen[k], j*wlen[k]:(j+1)*wlen[k]]			
				feature = stats(part_img[:, :, 0].reshape(-1),part_img[:, :, 1].reshape(-1),part_img[:, :, 2].reshape(-1))			
				feature_vector = np.concatenate((feature_vector,feature), axis = 0)
	
	return feature_vector

inp_img = imageio.imread("Input.jpg")
parts = np.sqrt(np.array([4, 9, 16, 25]))
feature_vector = np.array([])
hlen=[0,0,0,0]
wlen=[0,0,0,0]
for i in range(len(parts)):
	hlen[i]=inp_img.shape[0]//int(parts[i])
	wlen[i]=inp_img.shape[1]//int(parts[i])


final=SPP(inp_img,parts,feature_vector,hlen,wlen)
print(final)
print('size= ',len(final))
