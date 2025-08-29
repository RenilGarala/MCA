//1 prime number
//2 prime between range
//3 count prime number 
//4 happy number or not
//5 happy prime or not
//6 happy prime between range

#include<stdio.h>
#include<math.h>

int prime_or_not(int number){
    int flag = 0;
    for (int i = 2; i < number; i++){
        if(number%i == 0){
            flag=1;
            break;
        }
    }
    if(flag){
        return 1;
    } else {
        return 0;
    }
}

void prime_range(int start, int end){
    for (int i = start; i<=end; i++){
        int flag = 1;
        for (int j = 2; j < i; j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            printf("%d\n", i);
        }
    }
}

int count_prime(){
    int count = 0, result, number;

    while(1){
        printf("Enter number to count prime");
        scanf("%d", &number);
        if(number<0){
            break;
        }
        int result = prime_or_not(number);
        if(result == 0){
            count++;
        }
    }
    return count;
}

int happy_or_not(int number){
    int original = number;
    int remainder;
    int result;
    while(number != 1 && number != 4){
        int sum=0;
        while(number != 0){
            remainder = number % 10;
            sum += remainder*remainder;
            number = number / 10;
        }
        number = sum; 
        if(number==1){
            return 1;
        } else if(number == 4) {
            return 0;
        }
    }
    return 0;
}

int happy_prime(int number){
    int result = happy_or_not(number);
    int prime_result;
    if(result == 1){
        prime_result = prime_or_not(number);
        if(prime_result == 1){
           return 0;
        } else {
           return 1;
        }
    } else {
       return 0;
    }
}

void happy_prime_range(int start, int end){
    int result;
    for (int i = start; i<=end; i++){
        result = happy_or_not(i);
        if(result == 1){
            printf("%d\n", i);
        }
    }
}

void curculer_prime(){
}

int main(){
    int choice;
    int number, result;
    int start, end;
    int count = 0;
    
    printf("Enter 1 for prime number \nEnter 2 for prime between range \nEnter 3 for count prime number \nEnter 4 for happy number or not \nEnter 5 for happy prime or not \nEnter 6 for happy prime between range \n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Enter number to check prime or not");
            scanf("%d", &number);
            result = prime_or_not(number);
            if(result == 1){
                printf("Number is not prime %d", result);
            } else {
                printf("Number is prime %d",result);
            }
            break;
        case 2:
            printf("Enter 2 number to get prime between range");
            scanf("%d", &start);
            scanf("%d", &end);
            prime_range(start, end);
            break;
        case 3:
            result = count_prime();
            printf("Count is = %d",  result);
            break;
        case 4:
            printf("Enter number to check Happy number or not = ");
            scanf("%d", &number);
            result = happy_or_not(number);
            if(result == 1){
                printf(" number is happy");
            } else {
                printf("number is not happy");
            }
            break;
        case 5:
            printf("Enter number to check Happy number or not = ");
            scanf("%d", &number);
            result = happy_prime(number);
            if(result == 1){
                printf(" number is happy prime number");
            } else {
                printf("number is not happy prime number ");
            }
            break;
        case 6:
            printf("Enter 2 number get happy prime number between number ");
            scanf("%d", &start);
            scanf("%d", &end);
            happy_prime_range(start, end);
            break;
        default:
            printf("Enter valid number");
            break;
    }
    return 0;
}