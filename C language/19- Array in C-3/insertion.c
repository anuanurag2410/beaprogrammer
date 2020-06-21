#include<stdio.h>
#include<conio.h>

void main()
{
int arr[50],n,loc,key,i;

printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements of the array \n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

printf("Enter the location you want to insert value\n");
scanf("%d",&loc);

printf("Enter the value you want to insert\n");
scanf("%d",&key);

for(i=n-1;i>=loc;i--)
{
    arr[i+1]=arr[i];
}
arr[loc]=key;

printf("The array after insertion is \n");
for(i=0;i<=n;i++)
{
    printf("%d \n",arr[i]);
}
    getch();
}