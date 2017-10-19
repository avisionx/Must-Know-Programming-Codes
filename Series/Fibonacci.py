# Fibonacci.py
""" Fibonacci takes an integer input(Num) and returns a list containing "Num" numbers in fibonacci series.
	Pre-Conditions - Num should be an integer.
				   - Num1 should be greater than Num2 else the starting point is taken as smaller number.

	Fibonacci(1) returns --> [0]
	Fibonacci(2) returns --> [0, 1]
	Fibonacci(4) returns --> [0, 1, 1, 2]
	Fibonacci(5,3,4) returns --> [3, 4, 7, 11, 18]
	Fibonacci(5,4,2) returns --> [2, 4, 6, 10, 16]

"""
sad
def Fibonacci(Num,Num1 = 0,Num2 = 1):
	
	# Series store the final series to be printed
	Series = []
	Num3 = 0

	# If Num2 is less than Num2 then swap them
	if Num2 < Num1:
		Num1,Num2 = Num2,Num1

	# Appending the series
	if Num >= 1:
		Series.append(Num1)
		if Num >= 2:
			Series.append(Num2)
			Counter=3
			while Counter <= Num:
				Num3 = Num1 + Num2
				Num1 = Num2
				Num2 = Num3
				Series.append(Num3)
				Counter+=1

	return Series

if __name__ == '__main__':
	print(Fibonacci(0))
	print(Fibonacci(1))
	print(Fibonacci(2))
	print(Fibonacci(4))
	print(Fibonacci(5,3,4))
	print(Fibonacci(5,4,2))