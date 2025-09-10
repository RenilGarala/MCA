#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("data.txt","w");
    fprintf(fp,"%d\t%s",20, "renil");
    return 0;
}

