#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool palindrome(char s[], int i){
    if ( i >= strlen(s)/2)
        return true;
    if (s[i] != s[strlen(s)-i-1])
        return false;
    return palindrome(s, i + 1);
}

void main(){
    char s[6] = "madam";

    printf("'%s' Palindrome Check:\n%d",s, palindrome(s, 0));
}