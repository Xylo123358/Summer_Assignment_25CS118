#include <stdio.h>

int main() {
    int number, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    if (original == reverse)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}