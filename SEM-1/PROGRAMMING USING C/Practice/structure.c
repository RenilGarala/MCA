#include<stdio.h>

struct student{
    int rollno;
    char name[10];
};

int main(){
    int choice, count=0;

    struct student s1[10];
    while(1){
        printf("Enter 0 for End Program\nEnter 1 For Add Data\nEnter 2 for Dispay Data\n= ");
        scanf("%d", &choice);
        switch(choice){
            case 0:
                printf("🙏🏻 Dhanyvad Program Ended");
                return 0;
            case 1:
                if(count>=10){
                    printf("🤡 Student Data Storage Full\n");
                    break;
                }
                printf("Enter Roll No : ");
                scanf("%d", &s1[count].rollno);
                printf("Enter Name : ");
                scanf("%s", s1[count].name);

                printf("👉🏼Student Data Stored\n");
                count++;
                break;
            case 2:
                printf("|-Rollno--------Name--|\n");
                if(count==0){
                    printf("😔 Please Store Minimum Student Data\n");
                    break;
                }
                for(int i=0; i<count; i++){
                    printf("  %d\t\t%s\n", s1[i].rollno, s1[i].name);
                }
                printf("👉🏼 %d rows selected\n", count);
                break;
            default:
                printf("💩 Enter Valid Enput\n");
        }
    }
    return 0;
}