#include<stdio.h>
#include<conio.h>
void main()
{
int c;
clrscr();
scanf("%d",c);
switch(c)
{
case 1:
printf("this is a");
break;

case 2:
printf("this is b");
break;

default:
printf("this is default message");     \
break;
}
getch();
}
