# generates pre sum array for a given array
def getPreSum(arr):
    preSum = []
    preSum.append(arr[0])
    for i in range(1, len(arr)):
        preSum.append(arr[i] + preSum[i-1])
    return preSum


if __name__ == "__main__":
    arr = [1, 2, 3, 4, 1, 3]
    preSumArr = getPreSum(arr)
    print(preSumArr)
