# Arithmetic.py
""" Arithmetic takes the first number a_1, the d and the number of elements Num, and returns a list containing "Num" numbers in the Geometric series.
   Pre-Conditions - a_1 should be an Number.
               - q should be an Number..
               - num should be greater than 1

   Arithmetic(a_1=7,q = 9,Num = 5) --> Standard function call

   Output --> Num numbers are returned in series starting from a_1 with geometric value q

   Example:

   Arithmetic(1,1,2) returns --> [1,1]
   Arithmetic(2,2,5) returns --> [2,4,8,16,32]
"""


def Arithmetic(a_1, d, Num):
    return [a_1 +d*i for i in range(Num)]


if __name__ == '__main__':
    print(Arithmetic(1, 1, 2))
    print(Arithmetic(2, 2, 5))
