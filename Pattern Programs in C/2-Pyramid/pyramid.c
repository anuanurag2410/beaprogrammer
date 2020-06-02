#include<conio.h>
#include<stdio.h>

void main()
{

for(int i=1;i<=10;i++)
{
    for(int space=10-i;space>=1;space--)
    {
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++)
    {
        printf("*"); 
    }
    printf("\n");

}
    getch();

}