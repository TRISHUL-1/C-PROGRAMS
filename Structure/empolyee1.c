#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct emp
{
    char nam[30];
    int id;
    float s;
};
void great(struct emp e[], int n)
{
    int i,j;
    struct emp temp;
    for( i=0; i<n-1; i++)
    {
        for(j=0; j< n-i-1; j++)
        {
            if (e[j+1].s > e[j].s)
            { 
                temp = e[j];
                e[j] = e[j+1];
                e[j+1] =temp;
            }
        }
    }
}
void main()
{
    struct emp e[10];
    int n,i,y; 
    printf("Enter the number of employee: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter Employee Name: ");        scanf("%s",&e[i].nam);
        printf("Enter the ID: ");       scanf("%d",&e[i].id);
        printf("Enter the employee Salary: ");       scanf("%f",&e[i].s);
    }
    great(e,n);
    printf("\n--------------------\nEmployee Details:\n");
    printf("Employee Name: %s\nEmployee ID: %d\nEmployee Salary: %.2f",e[0].nam,e[0].id,e[0].s);
}