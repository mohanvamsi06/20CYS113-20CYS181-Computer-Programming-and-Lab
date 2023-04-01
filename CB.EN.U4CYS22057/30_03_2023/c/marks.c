#include <stdio.h>

int main() {
    // Getting the number of students
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    if (n > 0) {
        // Declaring arrays
        int sub1[n], sub2[n], sub3[n], sub4[n], sub5[n];
        int roll[n], total[n];
        float avg[n];
        
        // For loop for getting inputs
        for (int x = 0; x < n; x++) {
            // getting the roll number
            printf("Enter roll number of student %d: ", x + 1);
            scanf("%d", &roll[x]);
            
            // Geting the marks in 5 subjects
            printf("Enter marks of student in maths: ");
            scanf("%d", &sub1[x]);
            printf("Enter marks of student in social studies: ");
            scanf("%d", &sub2[x]);
            printf("Enter marks of student in physics: ");
            scanf("%d", &sub3[x]);
            printf("Enter marks of student in chemistry: ");
            scanf("%d", &sub4[x]);
            printf("Enter marks of student in english: ");
            scanf("%d", &sub5[x]);
            
            // calculating the total marks
            total[x] = sub1[x] + sub2[x] + sub3[x] + sub4[x] + sub5[x];
            
            // calculating the average marks
            avg[x] = (float) total[x] / 5.0;
        }
        
        // outputing the final values
        for (int x = 0; x < n; x++) {
            printf("\nRoll number of the student: %d", roll[x]);
            printf("\nMarks of the student: %d, %d, %d, %d, %d", sub1[x], sub2[x], sub3[x], sub4[x], sub5[x]);
            printf("\nTotal marks of the student: %d", total[x]);
            printf("\nAverage marks of the student: %.2f", avg[x]);
        }
    } else {
        printf("The number of students cannot be less than 1");
    }
    
    return 0;
}
