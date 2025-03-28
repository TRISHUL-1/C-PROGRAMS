#include<stdio.h>

void f(){
    printf("1 ");
    f();
}

void main(){
    f();
}