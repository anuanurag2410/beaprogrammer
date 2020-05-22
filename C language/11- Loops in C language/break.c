#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    clrscr();
    for(i=1;i<=10;i++)
    {
        if(i==7)
        {
            break;
        }
        printf("%d\n",i);
    }
getch();
}
