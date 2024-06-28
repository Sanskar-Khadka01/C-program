#include <stdio.h>

int main() {
    int num1, num2;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display ASCII values of the input numbers
    printf("ASCII value of %d is '%c'\n", num1, num1);
    printf("ASCII value of %d is '%c'\n", num2, num2);

    return 0;
}
