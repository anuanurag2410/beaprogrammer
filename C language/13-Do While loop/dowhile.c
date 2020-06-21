#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0;
do{
    printf("Enter the number you want to sum\n");
    scanf("%d",&n);
    sum=sum+n;
}while(n!=0);
printf("The total sum is = %d",sum);
    getch();
}
