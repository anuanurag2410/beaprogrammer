#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name[20];
    char temp;
    int i,j;
    printf("Enter the name :");
    gets(name);
    printf("%s",name);
    i=0;
    j=strlen(name);
    while(i<j)
    {
    temp=name[i];
    name[i]=name[j];
    name[j]=temp;
    i++;
    j--;
    }
    printf("%s",name);
    getch();
}