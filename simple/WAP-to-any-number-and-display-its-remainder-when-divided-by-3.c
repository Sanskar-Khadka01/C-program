#include <stdio.h>

int main() {
    int number, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the remainder when divided by 3
    remainder = number % 3;

    // Display the remainder
    printf("The remainder of %d when divided by 3 is: %d\n", number, remainder);

    return 0;
}
