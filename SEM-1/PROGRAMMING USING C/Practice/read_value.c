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
    fprintf(ptr, "%d \t %s \n", 05, "renil");
    fprintf(ptr, "%d \t %s \n", 35, "harsh");
    fprintf(ptr, "%d \t %s \n", 62, "yashpal");
    fclose(ptr); 

    //create variable to store value of file reading
    ptr = fopen("data.txt","r");

    // check our file is open or not
    if(ptr == NULL){
        printf("File Connection Failed");
        return 1;
    }
    printf("File content:\n");

    while (fscanf(ptr, "%d %s", &n, name) != EOF) {
        printf("value is %d name is %s\n", n, name);
    }
    fclose(ptr); 

    //print value of value variable

    return 0;
}