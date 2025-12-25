#include<stdio.h>
int main()
{
    int num=1;
    for(int i=1;i<=5;i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("    ");
        }
        for (int k = 1; k<=5-i+1 ; k++)
        {
            printf("%3d ",num);
            num++;
        }
        printf("\n");
    }
}