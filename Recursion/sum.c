#include<stdio.h>

void sum_parameterised(int i, int sum){
    if ( i < 1){
        printf("Sum: %d", sum);
        return;
    }
    sum_parameterised(i - 1, sum + i);
}

int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n - 1);
}

void main(){
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("The sum of %d numbers is: %d\n", n, sum(n));
    sum_parameterised(n, 0);
}