#include<stdio.h>
int main(){
    //its file pointer
    //its help to store returned value of fopen
    FILE *ptr;
    int n;
    char name[20];

    //open file in write mode
    ptr = fopen("data.txt", "w");
    
    //insert data in file
    fprintf(ptr, "%d \t %s \n", 12, "renilgarala");
    fclose(ptr); 

    //create variable to store value of file reading
    ptr = fopen("data.txt","r");
    fscanf(ptr, "%d", &n);
    fscanf(ptr,"%s", &name);
    fclose(ptr); 

    //print value of value variable
    printf("value is %d name is %s", n, name);

    return 0;
}
