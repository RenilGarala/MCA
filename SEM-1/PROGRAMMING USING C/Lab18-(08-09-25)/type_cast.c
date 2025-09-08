#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=10;
    float b=20.5;

    void *ptr;
    ptr=&a;
    // printf("%d", typeof(ptr));
    //  printf("%d", typeof((int *)ptr));
    printf("%d\n", (int *)ptr);
    ptr=&b;
    printf("%f", (float *)ptr);
    return 0;
}