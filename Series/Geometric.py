# Geometric.py
""" Geometric takes the first number firstElem, the ratio and the number of elements Num, and returns a list containing "Num" numbers in the Geometric series.
	Pre-Conditions - firstElem should be an Number.
				   - ratio should be an Number.
				   - Num should be an integer >=1.

	Geometric(firstElem=7,ratio = 9,Num = 5) --> Standard function call

	Output --> Num numbers are returned in series starting from firstElem with geometric value ratio

	Example:
	
	Geometric(1,1,2) returns --> [1,1]
	Geometric(2,2,5) returns --> [2,4,8,16,32]
"""


def Geometric(firstElem, ratio, Num):
    return [firstElem * (ratio ** i) for i in range(Num)]


if __name__ == '__main__':
    print(Geometric(1, 1, 2))
    print(Geometric(2, 2, 5))
