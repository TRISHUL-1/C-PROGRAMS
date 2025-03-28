#include<stdio.h>

void printf_till_n(int i, int n){
    if ( i > n ){
        return ;
    }
    printf("%d ",i);
    i++;
    printf_till_n(i, n);
}

void backtrack(int i, int n){
    if( i < 1){
        return;
    }
    backtrack(i - 1, n);
    printf("%d ", i);
}

void main(){
    int n;

    printf("Enter the limit: ");
    scanf("%d",&n);

    printf_till_n(1,n);

    backtrack(n, n);
}