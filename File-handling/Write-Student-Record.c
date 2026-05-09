//write_student_record.c
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    FILE *fp = fopen("students.txt", "w");
    struct Student s;
for
    printf("Enter ID, Name, Marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);

    fprintf(fp, "%d %s %.2f\n", s.id, s.name, s.marks);

    fclose(fp);
    printf("Record written\n");
    return 0;
}