#include<stdio.h>

void SI(int p, int t, int r){
    float SI;
    SI = (p * t * r)/100;

    printf("Simple Intereest is = %.2f", SI);
}
int main(){
    int p,t,r;

    printf("Enter P, T and R value = ");
    scanf("%d", &p);
    scanf("%d", &t);
    scanf("%d", &r);

    SI(p, t, r);
    return 0; 
}