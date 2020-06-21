#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[30];
    int len,i,j;

    printf("Enter the string :");
    gets(str);
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    getch();
}