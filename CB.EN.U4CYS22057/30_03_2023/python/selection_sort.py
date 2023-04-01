# Declaring variables
# Getting input for size of array and creating array
print("Enter the number of elements in the array")
size = int(input())
array = [0] * (size)

# Getting input for values of array
for i in range(0, size - 1 + 1, 1):
    print("Enter the value for index " + str(i))
    array[i] = int(input())
for i in range(0, size - 2 + 1, 1):
    
    # checking for the smallest value in the unsorted part of the array
    small = array[i]
    index = i
    for j in range(i, size - 1 + 1, 1):
        if array[j] < small:
            small = array[j]
            index = j
    
    # Exchanging the positions of the smallest value and the first element in the unsorted part of the array
    array[index] = array[i]
    array[i] = small
    
    # Printing output after each pass
    print("The array after pass " + str(i + 1) + "  is")
    for j in range(0, size - 1 + 1, 1):
        print(array[j])
