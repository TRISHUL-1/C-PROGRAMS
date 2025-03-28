#include<stdio.h>

void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int arr[], int n){
    for(int i = 0 ; i <= n-2; i++){
        int min = i;
        for(int j = i ; j <= n-1; j++){
            if( arr[j] < arr[i]){
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}

void bubble_sort(int arr[], int n){
    for(int i = n-1 ; i>=1 ; i--){
        int didSwap = 0;
        for(int j = 0 ; j <= i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0)    break;
    }
}

void insertion_sort(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j>0 && (arr[j-1] > arr[j])){
            swap(&arr[j-1], &arr[j]);
            j--;
        }
    }
}

void merge(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int a1[n1], a2[n2];
    for(int i =0; i< n1; i++){
        a1[i] = arr[low + i];
    }
    for(int j = 0; j< n2; j++){
        a2[j] = arr[mid+ 1 + j];
    }
    int i=0,j=0,k=low;
    while(i < n1 && j < n2){
        if(a1[i] <= a2[j]){
            arr[k++] = a1[i++];
        }
        else {
            arr[k++] = a2[j++];
        }
    }
    while(i < n1){
        arr[k++] = a1[i++];
    }
    while(j < n2){
        arr[k++] = a2[j++];
    }
}

void merge_sort(int arr[], int low, int high){
    if(low < high){
    int mid = low + (high - low) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
    }
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j){
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high){
    if(low < high){
        int p_index = partition(arr, low, high);
        quick_sort(arr, low, p_index);
        quick_sort(arr, p_index+1, high);
    }
}

void main() {
    int n;
    printf("\nEnter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Unsorted Array: ");
    print_arr(arr, n);
    quick_sort(arr, 0, n-1);
    printf("Sorted Array: ");
    print_arr(arr, n);
}