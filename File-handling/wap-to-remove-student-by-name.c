#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {

    FILE *fp, *temp;

    struct Student s;
    char removeName[50];

    int found = 0;

    fp = fopen("students.txt", "r");
    temp = fopen("temp.txt", "w");

    printf("Enter student name to remove: ");
    scanf("%s", removeName);

    while(fscanf(fp, "%d %s %f", &s.id, s.name, &s.marks) != EOF) {

        // if name matches → skip writing (remove it)
        if(strcmp(s.name, removeName) == 0) {
            found = 1;
            continue;
        }

        // otherwise copy to new file
        fprintf(temp, "%d %s %.2f\n", s.id, s.name, s.marks);
    }

    fclose(fp);
    fclose(temp);

    // replace old file
    remove("students.txt");
    rename("temp.txt", "students.txt");

    if(found == 1) {
        printf("Student removed successfully\n");
    } else {
        printf("Student not found\n");
    }

    return 0;
}