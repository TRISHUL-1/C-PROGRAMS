#include<stdio.h>

void print_ar(int ar[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int ar[], int i, int n){
    if( i >= n/2)
        return;
    swap(&ar[i], &ar[n - i - 1]);
    i++;
    reverse(ar, i, n);
}

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, 0, n);
    print_ar(a, n);
}