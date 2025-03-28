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

int partition(int ar[], int low, int high){
    int h = ar[high], i = low-1;
    for(int j = low; j < high; j++){
        if(ar[j] <= h){
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i+1], &ar[high]);
    return i+1;
}

void quickSort(int ar[], int low, int high){
    if(low < high){
        int pivot = partition(ar, low, high);
        quickSort(ar, low, pivot-1);
        quickSort(ar, pivot+1, high);
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
    quickSort(ar, 0, n-1);
    printf("\nSorted Array: \n");
    printar(ar, n);
}