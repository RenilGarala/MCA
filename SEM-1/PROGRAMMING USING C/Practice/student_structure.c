#include <stdio.h>
#include <stdlib.h>

struct student{
    int rollno;
    char name[50];
    float total_marks;
};

int main(){
    struct student *ptr;
    ptr = (struct student*)malloc(5 * sizeof(struct student));

    for(int i = 0; i<2; i++){
        struct student s1[i];
        printf("Enter roll no = ");
        scanf("%d", &(ptr+i)->rollno);

        printf("Enter Name = ");
        scanf("%s", &(ptr+i)->name);

        printf("Enter total marks = ");
        scanf("%f", &(ptr+i)->total_marks);
    }

    printf("-----------Students Detail-----------\n");
    printf("Rollno\tName\tTotal mark\n");

    int high_mark = (ptr+0)->total_marks;
    int high_student_index = 0;;

    for(int i=0; i<2; i++){
        printf("%d\t%s\t%.2f\n", (ptr+i)->rollno, (ptr+i)->name, (ptr+i)->total_marks);
        if(high_mark < (ptr+i)->total_marks){
            high_student_index = i;
        }
    }

    printf("-----------Highest Student-----------\n");
    printf("%d\t%s\t%.2f\n", (ptr+high_student_index)->rollno, (ptr+high_student_index)->name, (ptr+high_student_index)->total_marks);
    
    return 0;
}