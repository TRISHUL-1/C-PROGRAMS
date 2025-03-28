#include <stdio.h>
#include <string.h>

void reverse(char str[], int n) {
    int i;
    for (i = n-1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");  // To ensure the output ends with a new line.
}

void main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;  // Adjust length to ignore the newline character.
    }
    printf("\nThe reversed string is: \n");
    reverse(str, len);
}
