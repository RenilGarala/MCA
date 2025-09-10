#include<stdio.h>

int main(){
    FILE *fp1, *fp2;
    int n;

    fp1 = fopen("file1.txt", "w");
    fprintf(fp1,"%d",20);

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "w");

    fscanf(fp1, "%d", &n);
    fprintf(fp2, "%d", n);
    return 0;
}
