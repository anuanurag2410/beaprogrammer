#include<stdio.h>
#include<conio.h>
void main()
{
char opt;int a,b;

clrscr();
printf("Enter the operation you want to do....");
printf("+ for Addition of two numbers");
printf("- for difference of two numbers");
printf("* for product of two numbers");
printf("/ for division of two numbers");
scanf("%c",&opt);

switch(opt)
{
case '+':
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
printf("The sum of the numbers are : %d",(a+b));
break;

case '-':
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
printf("The difference of the numbers are : %d",(a-b));
break;

case '*':
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
printf("The product of the numbers are : %d",(a*b));
break;

case '/':
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
printf("The division of the numbers are : %d",(a/b));
break;

default:
printf("Invalid Operation!!");     
break;
}
getch();
}
