#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 3

typedef enum {A, B, C, D, F} Score;

typedef struct {
  char name[50];
  int age;
  Score score;
} Student;

void addStudent(int* i, Student* student, char* student_name, int student_age, Score s) {
    strcpy(student[*i].name, student_name);
    student[*i].age = student_age;
    student[*i].score = s;
    printf("Student added successfully.\n");
    (*i)++;
}

void displayStudents(int i, Student* student) {
  if (i == 0) {
    printf("No students to display.\n");
  } else {
    printf("List of students:\n");
    for (int j = 0; j < i; j++) {
      printf("Student %d\n", j + 1);
      printf("Name: %s\n", student[j].name);
      printf("Age: %d\n", student[j].age);
      printf("Score: %c\n", student[j].score);
      printf("\n");
    }
  }
}

void findHighestScoringStudent(int i, Student* student) {
  if (i == 0) {
    printf("No students to display.\n");
  } else {
    int index = 0;
    for (int j = 1; j < i; j++) {
      if (student[index].score > student[j].score) {
        index = j;
      }
    }
    printf("Highest-scoring student:\n");
    printf("Name: %s\n", student[index].name);
    printf("Age: %d\n", student[index].age);
    printf("Score: %c\n", student[index].score );
    printf("\n");
  }
}

int main() {
  int i = 0, option;
  char student_name[50];
  int student_age;
  Score s;

  Student student[MAX_STUDENTS];

  scanf("%d", &option);

  while (option != 4) {
    if (option == 1) {
      scanf("%s", student_name);
      scanf("%d", &student_age);
      scanf(" %c", &s);  
      if(i<3){
          addStudent(&i, student, student_name, student_age, s);
      }
      else{
          printf("Maximum number of students reached.\n");
          break;
      }
    } else if (option == 2) {
      displayStudents(i, student);
    } else if (option == 3) {
      findHighestScoringStudent(i, student);
    }
    scanf("%d", &option);
  }

  printf("Exiting the program. Thank you for using our system!\n");

  return 0;
}
