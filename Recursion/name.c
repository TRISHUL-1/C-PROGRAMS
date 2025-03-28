#include<stdio.h>
void print_name(char nam[],int i, int n){
    if( i > n){
        return ;
    }
    printf("%s\n",nam);
    i++;
    print_name(nam, i, n);
}

void main(){
    int n;
    char nam[30];

    printf("Enter a name: ");
    gets(nam);
    printf("Enter the number of times you want to print: ");
    scanf("%d",&n);

    print_name(nam, 1, n);
}