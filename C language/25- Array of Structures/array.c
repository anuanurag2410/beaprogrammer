#include<stdio.h>
#include<conio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

void main()
{
    int i;
    struct Employee emp[3];

    printf("----Enter the details of employee----\n\n");
    for(i=0;i<3;i++)
    {
        printf("Enter the id name salary of employee %d one by one ",i+1);
        scanf("%d",&emp[i].id);
        scanf("%s",emp[i].name);
        scanf("%d",&emp[i].salary);
    }

    printf("\n\n The details of employees are ------\n");
    for(i=0;i<3;i++)
    {
        printf("The id is : %d\n",emp[i].id);
        printf("The name of emplyee is : %s\n",emp[i].name);
        printf("The salary of emplyee is : %d \n ",emp[i].salary);
       }
       getch();
}