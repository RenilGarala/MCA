#include<stdio.h>

union u1{
    //max size from int and char[20] so allowcate 20 bytte space 
    int rollno;
    char name[20];
}u;

int main(){
    printf("Enter roll no");
    scanf("%d", &u.rollno);
    printf("Enter Name");
    scanf("%s", &u.name);

    //rollno return garbadge value bcs union allowcate space for name only, so rollno is not allocated
    printf("Student name is %s and roll no is %d", u.name, u.rollno);
    return 0;
}