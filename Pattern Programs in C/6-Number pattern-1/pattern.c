#include<stdio.h>
#include<conio.h>

void main()
{
    int r,sp,no,n,p;

    printf("Enter the number of rows : ");
    scanf("%d",&no);
    n=no;

    for(r=1;r<=no;r++)
    {
        for(sp=1;sp<=n;sp++)
        {
            printf(" ");
        }
        n--;

        for(p=1;p<=r;p++)
        {
            printf("%d ",r);
        }
        printf("\n");

   }
   getch();
}