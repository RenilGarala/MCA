#include <stdio.h>
#include <string.h>
int lenght;

struct shop{
    int number;
    char name[20];
    int amount;
};

int calculate_discount(struct shop s){
    int discount;
    if(s.amount>=5000){
        discount = s.amount*0.25;
    } else if(s.amount >= 4000 && s.amount < 5000 ){
        discount = s.amount*0.17;
    } else if(s.amount >= 3000 && s.amount < 4000 ){
        discount = s.amount*0.08;
    } else {
        discount = 0;
    }
    return discount;
}

int main(){
    printf("Enter Lenght = ");
    scanf("%d", &lenght);
    
    struct shop s[lenght];

    for(int i = 0; i<lenght; i++){
        printf("Enter Customer ID = ");
        scanf("%d", &s[i].number);

        printf("Enter Customer Name = ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Customer Amount = ");
        scanf("%d", &s[i].amount);
    }

    
    printf("C_ID\t C_NAME\t C_AMT \t C_DIS");
    for(int i = 0; i<lenght; i++){
        int discount = calculate_discount(s[i]);
        printf("\n%d\t %s\t %d\t %d", s[i].number, s[i].name, s[i].amount, discount);
    }
    return 0;
}
