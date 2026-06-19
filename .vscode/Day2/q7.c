#include <stdio.h>

int main() {
    int number, digit;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;   
        product *= digit;      
        number /= 10;          
    }

    printf("Product of digits = %lld\n", product);

    return 0;
}