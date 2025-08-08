#include<stdio.h>

void student_grade(int s1, int s2, int s3, int s4, int s5){
    float percentage;
    percentage = (s1 + s2 + s3 + s4 + s5)/5;

    if(percentage >= 80 && percentage <= 100){
        printf("Distinction class");
    } else if(percentage >= 60 && percentage < 79){
        printf("First Class");
    } else if(percentage >= 35 && percentage < 59) {
        printf("Second Class");
    } else {
        printf("You are fail 😄 LOL");
    }
}
int main(){
    int s1, s2, s3, s4, s5;
    float percentage;

    printf("Enter s1 s2 s3 s4 s5 subject mark = ");
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);
    scanf("%d", &s4);
    scanf("%d", &s5);

    student_grade(s1, s2, s3, s4, s5);
    return 0;
}