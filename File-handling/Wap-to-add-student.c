#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    FILE *fp = fopen("students.txt", "a");
    int n,i;
    printf("Enter number of student to store");
    scanf("%d",&n);
    struct Student s[n];
    for(i= 0 ; i< n; i++){
       printf("Enter student id : ");
       scanf("%d",&s[i].id);
       printf("Enter student name : ");
       scanf("%s",s[i].name);      
       printf("Enter student  masks : ");
       scanf("%f",&s[i].masks);


      fprintf(fp, "%d %s %.2f\n", s[i].id, s[i].name, s[i].marks);
}
    fclose(fp);
    printf("Record written\n");
    return 0;
}