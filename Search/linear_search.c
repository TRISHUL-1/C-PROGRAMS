#include<stdio.h>

int linear_search(int ar[], int n, int key){
    for(int i =0; i<n; i++){
        if(ar[i]==key)
            return i;
    }
    return -1;
}

void main(){
    int ar[25],n,key,pos;
    printf("Enter the limit of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(int i=0; i<n; i++)
        scanf("%d",&ar[i]);
    printf("Enter the key to search : ");
    scanf("%d",&key);
    pos = linear_search(ar,n,key);
    if (pos != -1)
        printf("The position of the key is: %d\n", pos);
    else
        printf("Key not found in the array.\n");
}