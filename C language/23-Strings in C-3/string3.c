#include<stdio.h>
#include<conio.h>

int StringLength(char[]);

void main()
{
    char str[30];
    int len;
    printf("Enter the String : ");
    gets(str);
    len=StringLength(str);
    printf("The length of the String is : %d",len);
    getch();
}

int StringLength(char str[])
{
    int i=0,count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}