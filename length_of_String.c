#include<stdio.h>
#include<conio.h>
void main(){
 char a[1000];
 int i;
 printf("Enter the String : ");
 scanf("%[^\n]s",a);
 for(i = 0; a[i] != '\0'; ++i);
     printf("Length of the String is %d",i);
     getch();
}