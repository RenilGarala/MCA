#include<stdio.h>

void bill(float unit){
    float bill;
    if(unit<=50 && unit>0){
        bill = unit * 2.30;
    } else if(unit<=100){
        bill = (50*2.30) + ((unit-50) * 2.60);
    } else if(unit <= 200){
        bill = (50*2.30) + (50 * 2.60) + ((unit-100) * 3.25);
    } else if(unit > 200){
        bill = (50*2.30) + (50 * 2.60) + (100 * 3.25) + ((unit-200)*4.35);
    } else {
        printf("Please enter positive values");
    }
    printf("Your Electric Bill is %.2f \n",bill);
}
int main(){
    float unit;

    printf("Enter Unit ");
    scanf("%f", &unit);

    bill(unit);
    return 0;
}