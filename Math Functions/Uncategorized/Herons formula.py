#Heron's formula#

import math

unit_of_measurement = "cm"
side1 = int(input("Enter the length of side A in cm: "))
side2 = int(input("Enter the length of side B in cm: "))
side3 = int(input("Enter the length of side C in cm: "))

braket1 = (side1 ** 2) * (side2**2) + (side1**2)*(side3**2) + (side2**2)*(side3**2)
braket2 = (side1**2)+(side2**2)+(side3**2)
function_braket1 = 4*braket1
function_braket2 = braket2**2
both_brakets = function_braket1 - function_braket2
result1 = math.sqrt(both_brakets)
area_of_triangle = result1 / 4

print("Side A", "=", side1, sep="")
print("Side B", "=", side2, sep="")
print("Side C", "=", side3, sep="")
print()
print("Calculated using Heron's Formula")
print()
print("Area of triangle"), print(area_of_triangle, unit_of_measurement, "2", sep="")


