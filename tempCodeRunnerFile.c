#include <stdio.h>

int main() {
    int number, digit;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;   // Extract last digit
        product *= digit;      // Multiply digit with product
        number /= 10;          // Remove last digit
    }

    printf("Product of digits = %lld\n", product);

    return 0;
}