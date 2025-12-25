#include <stdio.h>
// scan 10 st name from user store into file and read data from filep ptint it on console
struct Student
{
    int id;
    char name[20];
    float mark;
};
int main()
{
    FILE *fp;
    struct Student s;
    int choice;

    do
    {
        printf("--------Student Manu---------\n");
        printf("1. Add Student\n2. Read Student\n0. Exit\n");
        printf("Enter Choice = ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            fp = fopen("data.txt", "a");
            printf("Enter Name = ");
            scanf("%s", &s.name);
            printf("Enter ID = ");
            scanf("%d", &s.id);
            printf("Enter mark = ");
            scanf("%f", &s.mark);

            fprintf(fp, "%d - %s - %.2f\n", s.id, s.name, s.mark);
            printf("Record Insert\n");
            fclose(fp);
            break;
        case 2:
            fp = fopen("data.txt", "r");
            printf("Student List\n");
            while (fscanf(fp, "%d - %s - %f", &s.id, s.name, &s.mark) != EOF)
            {
                printf("%d\t%s\t%.2f\n", s.id, s.name, s.mark);
            }
            
            fclose(fp);
            break;
        case 0:
            printf("Program exit with 0");
            break;
        default:
            break;
        }
    } while (choice != 0);
}
