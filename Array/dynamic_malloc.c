#include<stdio.h>
#include<stdlib.h>

void print_ar(int ar[], int n){
    for(int i=0; i<n; i++)
        printf("%d ",ar[i]);
}

void main(){
    int *ar,n;
    printf("Enter the limit of the array : ");
    scanf("%d",&n);
    ar = (int *)malloc(n*sizeof(int));
    if(ar == NULL)
        printf("Empty Array");
    else{
        printf("Enter the elements of the array : ");
        for(int i =0; i<n; i++){
            scanf("%d",&ar[i]);
        }
        printf("The array :");
        print_ar(ar,n);
    }
}