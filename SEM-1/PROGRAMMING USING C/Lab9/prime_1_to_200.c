#include<stdio.h>

void prime_or_not(){
    for(int i=1; i<=200; i++){
        int temp = 0;
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                temp=1;
                break;
            }
        }
        if(temp == 0){
            printf("%d \n",i);
        }
    }
   
}
int main(){
    prime_or_not();
    return 0;
}
