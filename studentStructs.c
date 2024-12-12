#include <stdio.h>
#include <stdlib.h>

struct student{
  char name[50];
  int grade;
};
int main(void){
  int capacity = 0;
  while(capacity <= 0){
        printf("Enter the the amount of students: "); //prevent negative size values or a size of 0
        scanf("%d", &capacity);
    }
  struct student *students = (struct student*) malloc(sizeof(struct student) * capacity);
  

  for(int i = 0; i < capacity; i++){
    printf("Enter name: ");
    scanf("%s", students[i].name); //store student name at this index
    printf("Enter grade: ");
    scanf("%d", &students[i].grade); //store student grade at this index
  }
  for(int i  = 0; i < capacity; i++){
    printf("Student Name: %s\nStudent Grade: %d\n\n", students[i].name, students[i].grade);
  }

  free(students); //free students from memory allocation
}



