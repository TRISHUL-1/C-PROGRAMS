#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct employee
{
    int id;
    char nam[30];
    float sal;
};
void main()
{
    struct employee e1;
    printf("\nEnter the name of the employee: ");
    gets(e1.nam);
    printf("\nEnte the ID of the employee: ");
    scanf("%d",&e1.id);
    printf("\nEnter the salary of the employee: ");
    scanf("%f",&e1.sal);
    printf("\n-----------------------\nEployee Details:\n\n");
    printf("Emloyee Name: %s \nEmployee ID: %d \nEmployee Salary: %.2f",e1.nam,e1.id,e1.sal);
}