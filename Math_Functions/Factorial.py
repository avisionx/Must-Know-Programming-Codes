# Factorial.py
""" Factorial takes an integer input(Num) and returns the factorial of that number.
	Pre-Condition - Num should be an integer.
				  - Num should be positive.
	
	Factorail(Num) --> Standard Function Call

	Output --> Factorial of Num

	Examples:

	Factorial(0) returns --> 1
	Factorial(1) returns --> 1
	Factorial(2) returns --> 2
	Factorial(4) returns --> 24

"""

def Factorial(Num):
	
	# Num equal to 0 retrun 1
	if Num == 0:
		return 1
	
	# Else find the factorial
	else:
		
		# Fac contains the final factorial to be printed
		Fac = 1

		# Calculation of Factorial
		for i in range(1,Num+1):
			Fac = Fac*i

		return Fac

if __name__ == '__main__':
	print(Factorial(0))
	print(Factorial(1))
	print(Factorial(2))
	print(Factorial(4))