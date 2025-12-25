#include <stdio.h>
#include <stdlib.h>
void calc()
{
    int a, b;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);

    printf("add\t%d,sub\t%d,mul\t%d,div\t%d,mod\t%d", a + b, a - b, a * b, a / b, a % b);
}
// 0 1 1 2 3 5 8
void fibo()
{
    int a, b, sum;
    a = 0;
    b = 1;

    for (int i = 1; i <= 10; i++)
    {
        sum = a + b;
        printf("%d , ", sum);
        a = b;
        b = sum;
    }
}
void prime()
{
    int a, flag = 0;

    for (int j = 2; j <= 100; j++)
    {

        flag = 0;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d, ", j);
        }
    }
}
void armstrong()
{
    int n = 153, sum = 0, lastdigit, temp;

    temp = n;
    while (n != 0)
    {
        lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit;
        n = n / 10;
    }

    if (sum == temp)
    {
        printf("number is armstong");
    }
    else
    {
        printf("not armstrong number");
    }
}

void krishnamurti()
{
    // 145
    int n, temp, lastdigit, sum = 0, value;
    printf("Enter number for kirshnamurti or not");
    scanf("%d", &n);

    temp = n;
    while (n != 0)
    {
        lastdigit = n % 10;

        value = 1;
        for (int i = 1; i <= lastdigit; i++)
        {
            value *= i;
        }

        sum += value;
        n = n / 10;
    }

    if (temp == sum)
    {
        printf("number is krishnamurti");
    }
    else
    {
        printf("number is not krishnamurti");
    }
}
void palindrome()
{
    int n, reverce = 0, temp, lastdigit;
    printf("enter number");
    scanf("%d", &n);

    temp = n;
    while (n != 0)
    {
        lastdigit = n % 10;
        reverce = (reverce * 10) + lastdigit;
        n = n / 10;
    }
    if (reverce == temp)
    {
        printf("its is palindrom number");
    }
    else
    {
        printf("it is not palindrome number");
    }
}
void company()
{
    int job, level, basic;
    int perks, hra, gross, tax;
    int net;
    printf("enter your job");
    scanf("%d", &job);
    printf("enter your level");
    scanf("%d", &level);
    printf("enter your basic salary");
    scanf("%d", &basic);

    if (level == 1)
    {
        perks = 1500;
    }
    else if (level == 2)
    {
        perks = 950;
    }
    else if (level == 3)
    {
        perks = 600;
    }
    else
    {
        perks = 250;
    }

    hra = 0.10 * basic;
    gross = basic + hra + perks;

    if (gross <= 2000)
    {
        tax = 0;
    }
    else if (gross > 2000 && gross < 4000)
    {
        tax = 0.03 * gross;
    }
    else if (gross > 4000 && gross < 5000)
    {
        tax = 0.05 * gross;
    }
    else
    {
        tax = 0.08 * gross;
    }

    net = gross - tax;
    printf("%d", net);
}

int happyprime()
{
    int n, flag = 0;
    int temp, sum=0,lastdigit;
    printf("Enter Number");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Number is not happy prime\n");
        return 0;
    }

    temp = n;

    while (n!=1 && n!=4)
    {
        sum = 0;
        while (n!=0)
        {
            lastdigit = n % 10;
            sum += lastdigit * lastdigit;
            n /= 10;
        }
        n=sum;
    }
    
    if(n==1){
        printf("Number is Happy prime");
    } else {
        printf("Number is not happy prime");
    }
  
    return 0;
}
int main()
{
    int ch;
    do
    {
        printf("Enter 1 & 2 & 3 & 4 & 5 & 6 & 7 & 8");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            calc();
            break;
        case 2:
            fibo();
            break;
        case 3:
            exit(1);
            break;
        case 4:
            prime();
            break;
        case 5:
            krishnamurti();
            break;
        case 6:
            armstrong();
            break;
        case 7:
            palindrome();
            break;
        case 8:
            company();
            break;
        case 9:
            happyprime();
            break;
        default:
            printf("error occured");
            break;
        }
    } while (1);
    return 1;
}