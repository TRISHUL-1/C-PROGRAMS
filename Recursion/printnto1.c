#include<stdio.h>

void printf_till_n(int n){
    if ( n < 1 ){
        return ;
    }
    printf("%d ", n);
    printf_till_n(n - 1);
}

void backtrack(int i, int n){
    if ( i > n){
        return;
    }
    backtrack(i + 1, n);
    printf("%d ", i);
}

void main(){
    int n;

    printf("Enter the limit: ");
    scanf("%d",&n);

    printf_till_n(n);

    backtrack(1, n);
}