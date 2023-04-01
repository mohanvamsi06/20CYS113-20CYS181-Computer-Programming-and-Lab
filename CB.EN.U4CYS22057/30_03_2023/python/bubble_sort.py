# Declaring variables
# Getting input for size of array and creating array
print("Enter the number of elements in the array")
size = int(input())
array = [0] * (size)

# Getting input for values of array
for i in range(0, size - 1 + 1, 1):
    print("Enter the value for index " + str(i))
    array[i] = int(input())
for i in range(0, size - 1 + 1, 1):
    for j in range(0, size - 2 - i + 1, 1):
        
        # Checking if a value is greater than its next value
        if array[j] > array[j + 1]:
            
            # exchanging values
            a = array[j]
            array[j] = array[j + 1]
            array[j + 1] = a
    
    # Printing output after each pass
    print("The array after pass " + str(i + 1) + "  is")
    for j in range(0, size - 1 + 1, 1):
        print(array[j])
