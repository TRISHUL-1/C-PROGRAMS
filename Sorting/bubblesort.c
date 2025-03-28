#include<stdio.h>
void bubblesort(int ar[], int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j< n-i-1; j++)
        {
            if (ar[j]> ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
            
        }
    }
}
void printar(int ar[], int n){
    int i;
    for(i=0; i<n; i++)
        printf("%d ",ar[i]);
    printf("\n");
}
void main()
{
    int n,i, ar[25]; 
    printf("Enter the limit of the array: ");
    scanf("%d",&n);
    printf("Enter the Elements of the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("\nUnsorted Array: \n");
    printar(ar, n);
    bubblesort(ar,n);
    printf("\nSorted Array: \n");
    printar(ar, n);
}