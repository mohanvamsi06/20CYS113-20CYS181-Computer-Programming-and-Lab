# Declaring array
array = [0] * (5)

# Declaring other variables
# Getting the values and assigning them in the array
for x in range(0, 4 + 1, 1):
    print("Enter " + str(x + 1) + " value")
    input = int(input())
    array[x] = input

# assigning the the max value as the first value
max = array[0]

# checking the remaing values to see if they are greater than the first value
for x in range(0, 4 + 1, 1):
    if array[x] > max:
        
        # updating the max value to the largest value found
        max = array[x]

# outputing the largest value
print("The largest integer value in array is " + str(max))
