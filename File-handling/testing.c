#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    float marks;
};

int main() {


    int n, i, j ;

    printf("Enter number of students to store: ");
    scanf("%d", &n);

    struct Student s[n],temp;

    
    for(i = 0; i < n; i++) {

        printf("Enter student id: ");
        scanf("%d", &s[i].id);

        printf("Enter student name: ");
        scanf("%s", s[i].name);

        printf("Enter student marks: ");
        scanf("%f", &s[i].marks);   // FIXED
}
    // SORT BY NAME (A-Z)
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {

            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    } 
    // OPEN FILE
    FILE *fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("File error\n");
        return 1;
    }
    fprintf(fp, "Roll\t\tName\t\tMarks\n");
    fprintf(fp, "-----------------------------------\n");
    for(int i = 0; i < n; i++) {
        fprintf(fp, "%d %s %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    fclose(fp);

    printf("File sorted alphabetically by name.\n");

    return 0;
}
