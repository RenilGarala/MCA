#include<stdio.h>

int main(){
    FILE *fp;
    char ch[] = "good morning";

    fp=fopen("data.txt","r");
    fgets(ch, 100, fp);
    printf("%s\n", ch);
    fclose(fp);

    fp=fopen("data.txt","a");
    fputs("Hey Renil", fp);
    fclose(fp);

    fp=fopen("data.txt","r");
    fgets(ch, 100, fp);
    printf("%s", ch);
    fclose(fp);

    //file write
    fp=fopen("data.txt","w");
    fwrite(ch, 1, sizeof(ch)-1, fp);

    fclose(fp);
    return 0;
}

