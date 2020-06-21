#include<stdio.h>
#include<conio.h>

 void main()
 {
char ch='A';
int n;
printf("ENter the number of rows : ");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf("%c",ch);
        ch++;
    }
    ch='A';
    printf("\n");
}
     getch();
 }