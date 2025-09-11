#include<stdio.h>

int main(){
    FILE *fp;
    char ch[100];

    fp=fopen("demo.txt","w");
    fprintf(fp,"%d\t%s\n",20, "renil");
    fprintf(fp,"%d\t%s\n",10, "ram");
    fclose(fp);

    fp=fopen("demo.txt","r");

    // do{
    //     fgets(ch, sizeof(ch), fp);
    //     printf("%s\n", ch);
    // }while(fp!=NULL);

    while (fgets(ch, sizeof(ch), fp) != NULL) {
        printf("%s", ch); 
    }

    // int n;
    // while (fscanf(fp, "%s", ch) != EOF) {
    //     fgets(ch, 100, fp);
    //     printf("%d %s\n",&n, ch);
    // }

    fclose(fp);
    return 0;
}

