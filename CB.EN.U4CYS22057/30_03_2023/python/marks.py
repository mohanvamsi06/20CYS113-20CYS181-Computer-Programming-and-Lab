# getting the number of students
print("Enter the number of students")
n = int(input())
if n > 0:
    
    # Declaring arrays
    sub1 = [0] * (n)
    sub2 = [0] * (n)
    sub3 = [0] * (n)
    sub4 = [0] * (n)
    sub5 = [0] * (n)
    roll = [0] * (n)
    total = [0] * (n)
    avg = [0] * (n)
    
    # Declaring other variables
    # For loop for getting inputs
    for x in range(0, n - 1 + 1, 1):
        
        # getting the roll number
        print("Enter roll number of stundent " + str(x + 1))
        input = int(input())
        roll[x] = input
        
        # Geting the marks in 5 subjects
        print("Enter marks of stundent in maths")
        input = int(input())
        sub1[x] = input
        print("Enter marks of stundent in social studies")
        input = int(input())
        sub2[x] = input
        print("Enter marks of stundent in physics")
        input = int(input())
        sub3[x] = input
        print("Enter marks of stundent in chemistry")
        input = int(input())
        sub4[x] = input
        print("Enter marks of stundent in english")
        input = int(input())
        sub5[x] = input
        
        # calculating the total marks
        total[x] = sub1[x] + sub2[x] + sub3[x] + sub4[x] + sub5[x]
        
        # calculating the average marks
        avg[x] = float(total[x]) / 5
    
    # outputing the final values
    for x in range(0, n - 1 + 1, 1):
        print("Roll number of the student :" + str(roll[x]))
        print("Marks of the student :" + str(sub1[x]) + ", " + str(sub2[x]) + ", " + str(sub3[x]) + ", " + str(sub4[x]) + ", " + str(sub5[x]))
        print("total marks of the student :" + str(total[x]))
        print("Average marks of the student :" + str(avg[x]))
else:
    print("The number of students cannot be less than 1")
