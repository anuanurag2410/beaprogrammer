#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
    int n,res=1;
    printf("Enter the number to find factorial\n");
    scanf("%d",&n);
    res=fact(n);
    printf("Factorial of %d is %d",n,res);
    getch();
}
int fact(int n)
{int res=1;
if(n==0)
{
    res= 1;
}
else
{
res=n*fact(n-1);
    }
    return res;
}
