def appendElement(arr, x):
	arr += [x]
	return arr

if __name__ == "__main__":
	arr = [1, 2, 3]
	ele = 5
	arr = appendElement(arr, ele)
	print(arr)
