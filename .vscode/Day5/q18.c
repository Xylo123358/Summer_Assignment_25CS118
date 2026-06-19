#include <stdio.h>

int main() {
    int number, original, digit, i;
    int sum = 0, factorial;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        number /= 10;
    }

    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);

    return 0;
}