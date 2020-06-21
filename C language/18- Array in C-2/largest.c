#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5]={7,5,12,23,67};
    int largest=a[0],i;
    for(i=0;i<5;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }
    printf("The largest value in the array is : %d",largest);
    getch();
}