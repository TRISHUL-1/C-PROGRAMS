#include<stdio.h>

void print_ar(int ar[], int n){
    for(int i=0; i<n; i++)
        printf("%d ",ar[i]);
}

void delete(int ar[], int n, int pos){
    if(pos<0 || pos>n){
        printf("Out of Range");
    }else{
        for(int i=pos; i<n-1; i++){
            ar[i] = ar[i+1];
        }
    }
}

void main(){
    int a[25],pos,n;
    printf("Enter the limit of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(int i = 0; i<n; i++)
        scanf("%d",&a[i]);
    printf("The original array : ");
    print_ar(a,n);
    printf("\nEnter the position to delete : ");
    scanf("%d",&pos);
    delete(a,n,pos);
    printf("\nThe new array : ");
    print_ar(a,n-1);
}