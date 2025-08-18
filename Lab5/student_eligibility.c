#include<stdio.h>

void eligibility(int math, int physics, int chemistry){
    int total = math + physics + chemistry;

    if((math >= 50 && physics >=45 && chemistry >= 60 && total >= 170) || (math+physics >= 120)){
        printf("this student is eligible for admission");
    } else{
         printf("this student is not eligible for admission");
    }
}

int main(){
    int math, physics, chemistry;

    printf("Enter Math - ");
    scanf("%d", &math);

    printf("Enter Physics - ");
    scanf("%d", &physics);

    printf("Enter Chemistry - ");
    scanf("%d", &chemistry);

    eligibility(math, physics, chemistry);
    return 0;
}