#include <stdio.h>

struct student{
    char name[10];
    char course[10];
    int year;
    char gender[10];
    int subject1;
    int subject2;
    int subject3;
};


int main(){
    struct student s1;

    printf("Enter Name = ");
    scanf("%s", &s1.name);
    printf("Enter Course = ");
    scanf("%s", &s1.course);
    printf("Enter Year = ");
    scanf("%d", &s1.year);
    printf("Enter Gender = ");
    scanf("%s", &s1.gender);

    printf("Enter Subject 1 marks = ");
    scanf("%d", &s1.subject1);
    printf("Enter Subject 2 marks = ");
    scanf("%d", &s1.subject2);
    printf("Enter Subject 3 marks = ");
    scanf("%d", &s1.subject3);

    printf("%s - %s - %d - %s - %d - %d - %d \n", s1.name, s1.course, s1.year, s1.gender, s1.subject1, s1.subject2, s1.subject3);
    printf("Toatl marks is %d\n", s1.subject1 + s1.subject2 + s1.subject3);
    printf("Percentage is %d \n", (s1.subject1 + s1.subject2 + s1.subject3)/3);
    return 0;
}
