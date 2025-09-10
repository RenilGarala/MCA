#include<stdio.h>

struct s1{
    //allowcate size of int and char[20] is 4+20 = 24
    int rollno;
    char name[20];
}e;

union u1{
    //max size from int and char[20] so allowcate 20 bytte space 
    int rollno;
    char name[20];
}u;

int main(){
    printf("Structure size %lu\n", sizeof(e));
    printf("Union size %lu", sizeof(u));
    return 0;
}