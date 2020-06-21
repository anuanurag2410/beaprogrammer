#include<stdio.h>
#include<conio.h>

void main()
{
   int array[100], loc, i, m, key,b[10],n;
   printf("Enter number of elements in array\n");
   scanf("%d", &m);

   printf("Enter %d elements\n", m);
   for (i = 0; i < m; i++)
      scanf("%d", &array[i]);


   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &loc);

   printf("Enter number of elements 2nd array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);
   for (i = 0; i < n; i++)
      scanf("%d", &b[i]);

   for (i = m - 1; i >= loc - 1; i--)
      array[i+n] = array[i];

   for(i=0;i<n;i++)
   array[loc+i]=b[i];

   printf("Resultant array is\n");

   for (i= 0; i < m+n; i++)
      printf("%d\n", array[i]);

   getch();
}