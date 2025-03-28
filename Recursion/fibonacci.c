#include<stdio.h>

int fibo(int n){
    if ( n <= 1 )
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int fibonacci(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

void main(){
    int n; 
    printf("Enter the limit of the series: ");
    scanf("%d",&n);

    printf("\nThe series: \n");
    for(int i = 0; i<=n; i++){
        printf("%d ",fibonacci(i));
    }

    printf("\nThe %d-th Fibonacci number is : %d", n, fibo(n));
}