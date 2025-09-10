#include<stdio.h>

int main(){
    FILE *fp;
    int n;
    char name[20];
    fp=fopen("data.txt","r");
    fscanf(fp,"%d", &n);
    fscanf(fp,"%s", &name);
    printf("%d\t %s", n, name);
    return 0;
}

