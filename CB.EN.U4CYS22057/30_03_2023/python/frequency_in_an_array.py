# Declaring array
array = [0] * (10)

# Declaring other variables
# for loop for receiving inputs
for x in range(0, 9 + 1, 1):
    print("Enter " + str(x + 1) + " value")
    input = int(input())
    
    # assigning values in the array
    array[x] = input

# Getting the value to check the frequency
print("Enter the value for which the frequency should be found")
value = int(input())
freq = 0

# For loop for checking frequnency
for x in range(0, 9 + 1, 1):
    if array[x] == value:
        freq = freq + 1

# if condition to show an output for values not present in the array
if freq == 0:
    print("The given input value does not exist in the array")
else:
    
    # output for correct values
    print("The frequency of the given value in array is " + str(freq))
