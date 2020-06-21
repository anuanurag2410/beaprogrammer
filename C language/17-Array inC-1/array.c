#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
printf("Enter the values of array :\n");
for(int i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("\n The arraya values are :");
for(int i=0;i<5;i++)
{
    printf("%d\n",a[i]);
}


    getch();
}