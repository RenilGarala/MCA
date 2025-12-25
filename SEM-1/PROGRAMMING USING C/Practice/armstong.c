#include<stdio.h>

int power12(int lastdigit, int count){
    int pow=1;
    for (int i=0; i<count; i++){
        pow*=lastdigit;
    }
    printf("pow is %d\n", pow);
    return pow;
}

int main(){
    int number = 1634;
    int temp = number;
    int count=0;
    int sum=0;
    int lastdigit;

    do{
        number=number/10;
        count++;
    }while(number!=0);

    number=temp;

    do{
        lastdigit = number%10;
        sum = sum + power12(lastdigit, count);
        number = number/10;
    }while(number!=0);
    
    if(sum==temp){
        printf("Number is armstong number");
    } else {
        printf("Number is not armstong number");
    }

    return 0;
}

