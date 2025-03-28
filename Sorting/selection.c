#include<stdio.h>

void printar(int ar[], int n){
    int i;
    for(i=0; i<n; i++)
        printf("%d ",ar[i]);
    printf("\n");
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int ar[], int n){
    int minIdx;
    for(int i = 0 ; i< n-1 ; i++){
        minIdx = i;
        for(int j = i+1 ; j < n ; j++){
            if(ar[j] < ar[minIdx])
                minIdx = j;
        }
    swap(&ar[minIdx] , &ar[i]);
    }
}

void main() {
    int n, i, ar[25];
    printf("Enter the limit of the array: ");
    scanf("%d", &n);
    printf("Enter the Elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    printf("\nUnsorted Array: \n");
    printar(ar, n);
    selectionSort(ar, n);
    printf("\nSorted Array: \n");
    printar(ar, n);
}