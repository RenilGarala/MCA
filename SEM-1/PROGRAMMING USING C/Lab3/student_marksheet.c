#include<stdio.h>

void marksheet(int s1, int s2, int s3){
    int  total;
    float avrage;

    total = s1+s2+s3;
    avrage = total/3;

    printf("You get %d out of 300 \n", total);
    printf("You get %.2f percentage ", avrage);
}

int main(){
    int s1, s2, s3;
    printf("Enter s1 s2 s3 = ");
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);

    marksheet(s1, s2, s3);
    return 0;
}

