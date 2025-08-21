#include<stdio.h>
int a,b;

int sum(int a, int b){
    int sum = a+b;
    printf("sam is (with return-type and with argument) = %d \n",sum);
    return 0;
}
int main(){
    printf("Enter Two NUmbers = ");
    scanf("%d", &a);
    scanf("%d", &b);

    sum(a,b); 
    return 0;
}