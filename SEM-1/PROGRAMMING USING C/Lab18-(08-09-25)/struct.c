#include <stdio.h>

struct student{
    int rollno;
    char name[10];
    int total;
};


int main(){
    struct student s1;
    struct student s2;

    printf("Enter Roll No = ");
    scanf("%d", &s1.rollno);
    printf("Enter Name = ");
    scanf("%s", &s1.name);
    printf("Enter total marks = ");
    scanf("%d", &s1.total);

    printf("Enter Roll No = ");
    scanf("%d", &s2.rollno);
    printf("Enter Name = ");
    scanf("%s", &s2.name);
    printf("Enter total marks = ");
    scanf("%d", &s2.total);

    printf("%d - %s - %d\n", s1.rollno, s1.name, s1.total);
    printf("%d - %s - %d", s2.rollno, s2.name, s2.total);
    return 0;
}
