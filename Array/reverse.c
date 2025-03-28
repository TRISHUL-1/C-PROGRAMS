#include<stdio.h>
void displayreverse(int ar[], int n)
{
    printf("\nThe array in reverse order: \n");
    for(int i=n-1; i>=0; i--)
        printf("%d ",ar[i]);
}
void main()
{
    int i,n;
    printf("\nEnter the limit of the array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements of the array: \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    displayreverse(ar,n);
}