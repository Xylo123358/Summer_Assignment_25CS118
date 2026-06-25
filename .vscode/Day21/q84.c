#include <stdio.h>

int main() {
    char ch;

    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;   
        printf("Uppercase letter: %c\n", ch);
    } else {
        printf("Input is not a lowercase letter.\n");
    }

    return 0;
}