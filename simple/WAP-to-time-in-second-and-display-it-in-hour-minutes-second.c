#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input the total number of seconds
    printf("Enter the number of seconds: ");
    scanf("%d", &total_seconds);

    // Calculate hours, minutes, and remaining seconds
    hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    // Display the converted time
    printf("%d seconds is equal to:\n", total_seconds);
    printf("%d hours, %d minutes, and %d seconds.\n", hours, minutes, seconds);

    return 0;
}
