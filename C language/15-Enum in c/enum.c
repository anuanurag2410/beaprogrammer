#include<stdio.h>
#include<conio.h>

enum check{false,true};

int evencheck(int n)
{
    if(n%2==0)
    return true;
    else
    return false;
}

void main()
{
int n,res;
printf("Enter the number\n");
scanf("%d",&n);
    res=evencheck(n);
    if(res==1)
    {
        printf("The number is EVEN");
    }
    else
    {
        printf("Then number is ODD");
    }
    getch();
}