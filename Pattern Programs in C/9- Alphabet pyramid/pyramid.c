#include<stdio.h>
#include<conio.h>

void main()
{
int n,sp;
char ch='A';
printf("Enter the number of rows : ");
scanf("%d",&n);
sp=n;
for(int i=1;i<=n;i++)
{
    for(int s=1;s<=sp;s++)
    {
        printf(" ");
    }
    sp--;
for(int j=1;j<=2*i-1;j++)
{
    printf("%c",ch);
    ch++;
}
ch='A';
printf("\n");
}

    getch();
}