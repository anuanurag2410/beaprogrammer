#include<stdio.h>
#include<conio.h>

void main()
{
   int array[100], loc, i, n, key;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &loc);

   printf("Enter the value to insert\n");
   scanf("%d", &key);

   for (i = n - 1; i >= loc - 1; i--)
      array[i+1] = array[i];

   array[loc-1] = key;

   printf("Resultant array is\n");

   for (i= 0; i <= n; i++)
      printf("%d\n", array[i]);

   getch();
}