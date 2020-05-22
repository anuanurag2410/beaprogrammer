#include<stdio.h>
#include<conio.h>

void main()
{
int i,fact=1,n;
clrscr();
printf("Enter the number to find factorial\n");
scanf("%d",&n);

for(i=2;i<=n;i++)
{
fact*=i;
}
printf("The factorial of %d is = %d ",n,fact);
getch();
}
