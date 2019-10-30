# generates pre sum array for a given list
"""
Usage 

	arr = preSum(inputArr)
	
"""
def getPreSum(arr):
	preSum = []
	preSum.append(array[0])
	for i in range(1, len(array)):
		preSum.append(array[i] + preSum[i-1])
	return preSum

if __name__ == "__main__":
	arr = list(map(int,input().split()))
	preSum = getPreSum(arr)
	print(preSum)
	
