//C program to read name and marks of n number of students and store them in a file.
#include<stdio.h>
struct student{
    int id;
    char name[20];
};
int main(){
    FILE *fp;
    struct student s1;

    fp = fopen("dys.txt", "a");

    printf("Enter student id and name");
    scanf("%d %s", &s1.id, s1.name);
    fprintf(fp, "%d %s",s1.id, s1.name);

    fclose(fp);

    fp = fopen("dys.txt", "r");
    fscanf(fp,"%d %s",&s1.id, &s1.name);
    printf("id is %d name is %s",s1.id, s1.name);

    return 0;
}