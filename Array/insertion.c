#include<stdio.h>

void print_ar(int ar[], int n){
    for(int i=0; i<n; i++)
        printf("%d ",ar[i]);
}

void insert(int ar[], int n, int pos, int val){
    for(int i=n-1; i>=0; i--){
        if(i == pos){
            ar[i+1] = ar[i];
            ar[i] = val;
            break;   
        }
        else {
            ar[i+1] = ar[i];
        }
    }
}

void main(){
    int a[25],pos,val,n;
    printf("Enter the limit of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(int i = 0; i<n; i++)
        scanf("%d",&a[i]);
    printf("The original array : ");
    print_ar(a,n);
    printf("\nEnter the positon and value to insert : ");
    scanf("%d%d",&pos,&val);
    if(a[pos] == val){
        printf("Value already exists");
    }
    else if(pos<0 || pos>n){
        printf("Out of Range");
    }else{
        printf("\nThe new array : ");
        insert(a,n,pos,val);
        print_ar(a,n+1);
    }
}