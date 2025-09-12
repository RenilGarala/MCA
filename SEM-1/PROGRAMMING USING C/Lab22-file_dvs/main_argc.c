#include<stdio.h>
int main(int argc, char *argv[0]){
    printf("Number of argument %d\n", argc);
    printf("sum of two number is %d", atoi(argv[1]) + atoi(argv[2]));
}