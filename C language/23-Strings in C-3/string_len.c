#include<stdio.h>
#include<conio.h>

int StringLength(char[]); //declaration

void main()
{
    int len=0;
    char name[20];
    printf("Enter you name : ");
    gets(name);
    len=StringLength(name);//function call
    printf("The length is : %d",len);
    getch();
}

int StringLength(char name[])
{
    int i=0,count=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}


