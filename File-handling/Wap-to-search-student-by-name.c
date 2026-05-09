#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    float marks;
};

int main() {

    FILE *fp;

    struct Student s;

    char searchName[100];

    int found = 0;

    fp = fopen("students.txt", "r");

    printf("Enter student name to search: ");
    scanf("%s", searchName);

    while(fscanf(fp, "%d %s %f",
                 &s.id,
                 s.name,
                 &s.marks) != EOF) {

        if(strcmp(s.name, searchName) == 0) {

            printf("\nStudent Found\n");

            printf("ID    : %d\n", s.id);
            printf("Name  : %s\n", s.name);
            printf("Marks : %.2f\n", s.marks);

            found = 1;
        }
    }

    if(found == 0) {
        printf("\nStudent not found\n");
    }

    fclose(fp);

    return 0;
}