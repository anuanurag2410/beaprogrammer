#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1;
printf("Ente the number you want to print table\n");
scanf("%d",&n);

while(i<=10)
{

printf("%d X %d = %d \n",n,i,(n*i));
i++;

}
    getch();
}
