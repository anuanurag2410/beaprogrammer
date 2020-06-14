#include<stdio.h>
#include<conio.h>
int fact(int n); //declaration
void main()
{
    int n,res;
    printf("Enter the number to print factorial\n");
    scanf("%d",&n);
    res=fact(n);
    printf("The factorial of %d is %d",n,res);
    getch();
}

int fact(int n)//defination
{
    int res=1;

    if(n==0)
    res=1;

    else{
        res=n*fact(n-1);
    }
    return res;

}