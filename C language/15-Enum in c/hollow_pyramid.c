#include <stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
printf("Enter the number of rows\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=i;j<n;j++)
    {
        printf(" ");

    }
    for(j=1;j<=2*i-1;j++)
    {
        if(j==1 || j== 2*i-1 || i==n)
        {
            printf("*");
        }
        else 
        {
            printf(" ");
        }
    }
    printf("\n");
}

    getch();
}