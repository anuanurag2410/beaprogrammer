 #include<conio.h>
#include<stdio.h>

void main()
{
int n,i,j,space;

printf("Enter the number of rows\n");
scanf("%d",&n);

for(i=1;i<=n;i++) //row loop
{
for(space=n-i;space>=1;space--)//space loop
{
    printf(" ");
}
for(j=1;j<=2*i-1;j++)//star printing loop
{
    printf("*");
}
printf("\n");

}



    getch();

}
