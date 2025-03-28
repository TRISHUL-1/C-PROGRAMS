#include<stdio.h>
int binarysearch(int ar[], int n, int key)
{
    int i, left=0, right= n-1;
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if(ar[mid]== key)
            return mid;
        else if(ar[mid]<key)
            left = mid+1;
        else
            right = mid-1;
    }
    return -1;
}
void main()
{
    int i,n,key,pos;
    printf("Enter the limit of the array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements of the array (sorted): \n");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("Enter the element to search for: ");
    scanf("%d",&key);
    pos = binarysearch(ar,n,key);
    if(pos == -1)
        printf("\nThere is no such element in the array.");
    else    
        printf("\nThe element is present at position %d",pos);
}