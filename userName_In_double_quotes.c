#include<stdio.h>
#include<conio.h>
void main(){
    char name[1000];
    printf("Enter your name : ");
    scanf("%[^\n]s",name);
    printf("\"Hello , %s\"",name);
    getch();
}