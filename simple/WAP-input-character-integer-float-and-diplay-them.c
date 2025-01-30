#include <stdio.h>

int main() {
    char ch;
    int num;
    float fnum;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leading whitespace

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Input a floating-point number
    printf("Enter a float: ");
    scanf("%f", &fnum);

    // Display the inputs
    printf("\nYou entered:\n");
    printf("Character: %c\n", ch);
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", fnum);  // Displaying float with 2 decimal places

    return 0;
}
