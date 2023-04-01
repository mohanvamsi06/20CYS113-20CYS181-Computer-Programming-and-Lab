# Declaring array
array = [0] * (10)

# Declaring variables
# For loop for taking input
for x in range(0, 9 + 1, 1):
    print("Enter " + str(x + 1) + " integer value")
    input = int(input())
    
    # assigning values in array
    array[x] = input

# For loop for writing output
for x in range(0, 9 + 1, 1):
    print("The " + str(x + 1) + " value in array is " + str(array[x]))
