#include<stdio.h>

int sum1(int a, int b){
    int sum = a+b;
    printf("sam is (with return-type and with argument) = %d \n",sum);
    return 0;
}

void sum2(int a, int b){
    int sum = a+b;
    printf("sam is (without return type and with argument) = %d \n",sum);
}

void sum3(){
    int a,b;

    printf("Enter Two NUmbers = ");
    scanf("%d", &a);
    scanf("%d", &b);

    int sum = a+b;
    printf("sam is = %d \n",sum);
}

int sum4(){
    int a,b;

    printf("Enter Two NUmbers = ");
    scanf("%d", &a);
    scanf("%d", &b);

    int sum = a+b;
    printf("sam is = %d \n",sum);

    return 0;
}

int main(){
    int a,b;

    printf("Enter Two NUmbers = ");
    scanf("%d", &a);
    scanf("%d", &b);

    sum1(a,b); // with return type and with argument
    sum2(a,b); // without return type and with argument
    sum3(); // without return type and without argument
    sum4(); // with return type and without argument
    return 0;
}
