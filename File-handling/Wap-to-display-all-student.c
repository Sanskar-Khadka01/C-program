#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {

    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "r");

    printf("\nStudent Records\n");

    while(fscanf(fp, "%d %s %f", &s.id, s.name, &s.marks) != EOF) {

        printf("%d %s %.2f\n", s.id, s.name, s.marks);
    }

    fclose(fp);

    return 0;
}