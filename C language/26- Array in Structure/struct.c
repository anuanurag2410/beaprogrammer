#include<stdio.h>
#include<conio.h>

struct Student
{
    int id;
    char name[20];
    int marks[3];
};

void main()
{
    int i,j;
    struct Student s[3];

    printf("----Enter the details of employee----\n\n");
    for(i=0;i<3;i++)
    {
        printf("Enter the id name Marks of Student %d one by one \n ",i+1);
        scanf("%d",&s[i].id);
        scanf("%s",s[i].name);
        for(j=0;j<3;j++)
        {
            printf("Enter the Subject %d marks : ",j+1);
            scanf("%d",&s[i].marks[j]);
        }
        printf("\n");
    }

    printf("\n------The details of Students are ------\n");
    for(i=0;i<3;i++)
    {
        printf("The id is : %d",s[i].id);
        printf("The name of Student is : %s",s[i].name);
        for(j=0;j<3;j++)
        {
            printf("The MArks in Subject %d is : %d ",j+1,s[i].marks[j]);
            printf("\n");
        }
        printf("\n");
       }
       getch();
}