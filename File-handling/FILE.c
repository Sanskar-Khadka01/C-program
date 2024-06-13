#include <stdio.h>

int main() {
    FILE *filePtr;

    // Attempt to create a file
    filePtr = fopen("new_file.txt", "w");

    // Check if the file was created successfully
    if (filePtr == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    // File created successfully, so close it
    fclose(filePtr);

    printf("File created successfully.\n");

    return 0;
}
