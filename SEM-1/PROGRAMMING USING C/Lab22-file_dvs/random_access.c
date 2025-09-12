//rewind(fp)

//after reading file one time and after taht pointer at EOF
//so using rewind we can set pointer at first ch of file

//ftell()

//return position of file pointer

#include<stdio.h>
int main(){
    FILE *fp;

    int ch;
    int n,number;
    printf("Enter lenght of number = ");
    scanf("%d", &n);

    fp = fopen("demo.txt", "a");
    for(int i=1; i<=n; i++){
        printf("Enter number to store in file = ");
        scanf("%d", &number);
        fprintf(fp, "%d\n", number);
    }
    fclose(fp);

    //read file
    fp = fopen("demo.txt","r");

    while(fscanf(fp, "%d" , &ch ) != EOF){
        printf("%d\n", ch);
    }
    rewind(fp);
    while(fscanf(fp, "%d" , &ch ) != EOF){
        printf("%d\n", ch);
    }
    printf("Position is %ld", ftell(fp));

    fclose(fp);
    return 0;
}
