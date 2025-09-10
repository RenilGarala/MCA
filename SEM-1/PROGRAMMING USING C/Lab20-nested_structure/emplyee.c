#include<stdio.h>

struct address{
    char city[10];
    int house_no;
};

struct employee{
    int e_id;
    char name[10];
    struct address ad;
};

int main(){
    struct employee e1;

    printf("Enter Employee id = ");
    scanf("%d", &e1.e_id);

    printf("Enter Employee Name = ");
    scanf("%s", &e1.name);

    printf("Enter Employee City = ");
    scanf("%s", &e1.ad.city);

    printf("Enter Employee House Number = ");
    scanf("%d", &e1.ad.house_no);

    printf("--------------Empleye Detail--------------");
    printf("\nId = %d\n Name = %s\n City = %s\n House_no = %d ", e1.e_id,e1.name,e1.ad.city,e1.ad.house_no);
    return 0;
}