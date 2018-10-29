""" 
preSum is the prefix sum array, preSum[i] --> sum of elements of array from index 0 to i, i.e. sum of elements of prefix of length i of array. 
for eg. - 
	for, array = [1,2,3] the output array, preSum = [1,3,6]
"""
array = list(map(int,input().split()))
preSum = []
preSum.append(array[0])
for i in range(1, len(array)):
	preSum.append(array[i] + preSum[i-1])
print(preSum)
