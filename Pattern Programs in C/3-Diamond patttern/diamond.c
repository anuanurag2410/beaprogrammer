#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,space=1,s;
printf("Enter the number of rows in diamond\n");
scanf("%d",&n);
space=n-1;
for(i=1;i<=n;i++)
{
    for(s=1;s<=space;s++)
        printf(" ");
    space--;
    for(j=1;j<=2*i-1;j++)
    {
        printf("*");
    }
    printf("\n");
}
space=1;
for(i=1;i<=n-1;i++)
{
    for(s=1;s<=space;s++)
        printf(" ");
    space++;
    for(j=1;j<=2*(n-i)-1;j++)
    {
        printf("*");
    }
    printf("\n");
}
      getch();
}
