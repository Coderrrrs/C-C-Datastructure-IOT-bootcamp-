#include<stdio.h>
#include<conio.h>
void main(){
    int day,month,year;
   
    printf("Enter the date in given format:(DD/MM/YYYY) : ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day - %02d, Month - %02d, Year - %d" ,day,month,year);
    getch();
}