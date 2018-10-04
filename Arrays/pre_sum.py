array = list(map(int,input().split()))
preSum = []
preSum.append(array[0])
for i in range(1, len(array)):
	preSum.append(array[i] + preSum[i-1])
print(preSum)
