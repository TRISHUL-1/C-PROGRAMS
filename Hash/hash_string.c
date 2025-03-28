#include <stdio.h>
#include<string.h>

void main(){
    char s[10] = "abcdbcfc";
    int hash[256] = {0};

    //pre storing 
    for (int i = 0; i < strlen(s); i++){
        hash[s[i]]++;
    }

    int q;
    scanf("%d", &q);
    while(q--){
        char c;
        scanf(" %c", &c);
        // fetch
        printf("Count: %d\n", hash[c]);
    }
}