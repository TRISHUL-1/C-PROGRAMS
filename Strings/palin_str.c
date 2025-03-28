#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int isPalindrome(char *str) {
    int i = 0;
    int l = strlen(str) - 1;

    while (i < l) {
        if (str[i] != str[l]) {
            return 0;  // Not a palindrome
        }
        i++;
        l--;
    }
    return 1;  // Is a palindrome
}

int main() {
    char str[100];

    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character

    toLowerCase(str);

    if (isPalindrome(str)) {
        printf("The String is a Palindrome.\n");
    } else {
        printf("The String is not a Palindrome.\n");
    }

    return 0;
}
