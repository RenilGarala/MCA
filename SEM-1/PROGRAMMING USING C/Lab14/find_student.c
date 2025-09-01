#include <stdio.h>
#include <string.h>

int main(){
    int length;
    printf("Enter number of student");
    scanf("%d", &length);

    char searchName[10];
    char studentList[length][10];

    for(int i = 0; i < length ; i++){
        printf("Enter Name [%d]", i );
        scanf("%s", studentList[i]);
    }

    printf("Search name");
    scanf("%s", &searchName);
    
    int isfound = 0;
    for(int i = 0; i < length ; i++){
        if(strcmp(studentList[i], searchName) == 0 ){
            printf("%s Found At [%d] in student list ", searchName, i+1);
            isfound=1;
        }
        scanf("%s", studentList[i]);
    }

    if(isfound == 0){
        printf("%s Not found in student list", searchName);
    }
    return 0;
}