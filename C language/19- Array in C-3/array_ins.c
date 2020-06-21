#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[50],n,loc,key,i,b[10],m;

printf("Enter the size of array\n");
scanf("%d",&m);
printf("Enter the elements of the array \n");
for(i=0;i<m;i++)
{
    scanf("%d",&arr[i]);
}

printf("Enter the location of insertion\n");
scanf("%d",&loc);

printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements of the array \n");
for(i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}

for(i=m-1;i>=loc;i--)  //shifting 
{
    arr[i+n]=arr[i];
}
for(i=0;i<n;i++)
{
    arr[loc+i]=b[i];
}

printf("The values after insertion is:\n");
for(i=0;i<m+n;i++)
{
    printf("%d\n",arr[i]);
}
getch();
}
