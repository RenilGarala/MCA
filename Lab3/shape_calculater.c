#include<stdio.h>
const float PI = 3.14;

float area_of_triagle(int l, int b){
    int area = (l*b)/2;
    return area;
}
float area_of_rectangle(int l, int b){
    int area = l*b;
    return area;
}
float area_of_circle(int r){
    int area = PI*r*r;
    return area;
}
float circumfrences_of_circle(int r){
    int area = 2*PI*r;
    return area;
}

int main(){
    float r, l, b;

    printf("enter redius = ");
    scanf("%f", &r);
    printf("enter lenght = ");
    scanf("%f", &l);
    printf("enter breath = ");
    scanf("%f", &b);


    printf("Area of triangle = %.2f \n", area_of_triagle(l, b));
    printf("Area of rectangle = %.2f \n", area_of_rectangle(l, b));
    printf("Area of circle = %.2f \n", area_of_circle(r));
    printf("Circumfrences of circle = %.2f \n", circumfrences_of_circle(r));
    return 0; 
}