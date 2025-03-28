#include<stdio.h>

void printar(int ar[], int n){
    int i;
    for(i=0; i<n; i++)
        printf("%d ",ar[i]);
    printf("\n");
}

void insertionSort(int ar[], int n){
    int i,key,j;
    for(i = 0; i<n; i++){
        key = ar[i];
        j = i-1;
        while(j>=0 && ar[j] > key){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
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
    insertionSort(ar, n);
    printf("\nSorted Array: \n");
    printar(ar, n);
}