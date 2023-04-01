# This program swpas the values of two variables without a third variable
# Declaring variables
# Getting the value of and variables
print("Enter the value of first variable")
a = int(input())
print("Enter the value of second variable")
b = int(input())
print("The numbers before swapping are " + str(a) + " and " + str(b))

# Swapping the variables
a = a + b
b = a - b
a = a - b

# Final output
print("The numbers after swapping are " + str(a) + " and " + str(b))
