#include<stdio.h>

void main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int ar[n];
    for(int i = 0l; i<n; i++){
        scanf("%d",&ar[i]);
    }

    int hash[13] = {0};
    for(int i = 0 ; i<n; i++){
        hash[ar[i]] += 1;
    }

    int q;
    scanf("%d",&q);
    while(q--){
        int num;
        printf("Element: ");
        scanf("%d",&num);
        printf("Count: %d\n",hash[num]);
    }
}