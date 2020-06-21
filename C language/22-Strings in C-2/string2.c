#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
int len;
char name[20];

printf("Enter the name : ");
gets(name);
len=strlen(name);
printf("The length of string is : %d",len);

    getch();
}