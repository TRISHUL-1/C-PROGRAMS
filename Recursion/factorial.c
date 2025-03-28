#include<stdio.h>

void fact(int n, int i){
    if(n < 1){
        printf("The Factorial: %d ",i);
        return;
    }
    fact(n - 1, i * n);
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("The factorial of %d is: %d \n",n,factorial(n));
    fact(n, 1);
}