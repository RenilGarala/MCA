#include <stdio.h>
#include <string.h>
struct student{
    int rollno;
    char name[20];
    int maths;
    int physics;
    int chemastry;
};

int main(){
    int lenght;
    printf("Enter Lenght = ");
    scanf("%d", &lenght);
    
    struct student s[lenght];
    char elegible[lenght][4];

    for(int i = 0; i<lenght; i++){
        printf("Enter Your Roll Number = ");
        scanf("%d", &s[i].rollno);
        printf("Enter Your Name = ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter Maths Marks = ");
        scanf("%d", &s[i].maths);
        printf("Enter physics Marks = ");
        scanf("%d", &s[i].physics);
        printf("Enter chemastry Marks = ");
        scanf("%d", &s[i].chemastry);

        int total = s[i].maths + s[i].physics + s[i].chemastry;

        if(s[i].maths >= 50 && s[i].physics >= 45 && s[i].chemastry >= 60 && total >= 170){
            strcpy(elegible[i], "Yes");
        } else if (s[i].maths + s[i].physics >= 120){
            strcpy(elegible[i], "Yes");
        } else{
            strcpy(elegible[i], "No");
        }
    }

    FILE *fp;
    int n;
    char name[200];
    fp=fopen("data.txt","w");

    fprintf(fp, "\nRN\t Name\t mth phy ch ele");
    for(int i=0; i<lenght; i++){
         fprintf(fp, "\n%d\t %s\t %d\t %d\t %d\t %s", s[i].rollno, s[i].name, s[i].maths, s[i].physics, s[i].chemastry, elegible[i]);
    }
    fclose(fp);
    return 0;
}
