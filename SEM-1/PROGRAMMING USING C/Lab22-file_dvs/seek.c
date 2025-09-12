//SEEK_SET - move n number position from starting position
//SEEK_CUR - move n number position from the current position 
//SEEK_END - 


#include<stdio.h>
int main(){
    FILE *fp;

    fp = fopen("demo.txt", "w");
    fputs("hey there! my name is renil",fp);
    fseek(fp,0,SEEK_END);
    fputs("radhe", fp);
    fclose(fp);
    return 0;
}
