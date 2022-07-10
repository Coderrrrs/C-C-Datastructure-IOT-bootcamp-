#include<stdio.h>
#include<conio.h>
#define PI 3.141
void main(){
    float radius,area;
    printf("Please enter the Radius of the circle : ");
    scanf("%f",&radius);
    area = PI * radius * radius;
    printf("\nArea of the circle is %.2f having the radius %.2f",area,radius);
    getch();
}