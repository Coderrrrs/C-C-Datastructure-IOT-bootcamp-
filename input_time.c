#include<stdio.h>
#include<conio.h>
void main(){
    int hour,minute;
    printf("Enter the time in given format:(HH:MM) : ");
    scanf("%d:%d",&hour,&minute);
    printf("%02d hour and %02d minute",hour,minute);
}