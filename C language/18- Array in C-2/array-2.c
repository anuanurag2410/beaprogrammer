#include<stdio.h>
#include<conio.h>

void main()
{
int a[5]={10,20,30,40,50};
int sum=0,i;
for(i=0;i<5;i++)
{
    sum=sum+a[i];
}
printf("The sum of the array values are : %d",sum);
    getch();
}

