#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    float marks;
};

// prototypes
void addStudent();
void displayStudent();
void updateStudent();
void deleteByName();
void sortStudents(struct Student s[], int n);

int main()
{
    FILE *fp;
    struct Student s[200];
    int n = 0;

    // STEP 1: TRY OPEN FILE
    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        // FILE NOT EXISTS → CREATE IT
        fp = fopen("students.txt", "w");
        fclose(fp);

        printf("File created successfully.\n");

        printf("No students found. Please add students first.\n");
        addStudent();   // first entry
    }
    else
    {
        // FILE EXISTS → READ DATA
        while(fscanf(fp, "%d %s %f",
              &s[n].id,
              s[n].name,
              &s[n].marks) != EOF)
        {
            n++;
        }
        fclose(fp);

        // STEP 2: CHECK EMPTY FILE
        if(n == 0)
        {
            printf("File is empty. Add students first.\n");
            addStudent();
        }
    }

    // STEP 3: GO TO MENU
    int choice;

    while(1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudent(); break;
            case 3: updateStudent(); break;
            case 4: deleteByName(); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}

void sortStudents(struct Student s[], int n)
{
    struct Student temp;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
// Add student 
void addStudent()
{
    FILE *fp;
    struct Student s[200];
    int n = 0, add;

    // READ EXISTING DATA
    fp = fopen("students.txt", "r");
    if(fp!=NULL){
        fp = fopen("students.txt", "w");
        fclose(fp);
        fp = fopen("students.txt", "r");
    }
    
        while(fscanf(fp, "%d %s %f",
              &s[n].id,
              s[n].name,
              &s[n].marks)==3)
        {
            n++;
        }
        fclose(fp);

    // ADD NEW STUDENTS
    printf("How many students to add: ");
    scanf("%d", &add);

    for(int i = n; i < n + add; i++)
    {
        printf("Enter id: ");
        scanf("%d", &s[i].id);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    n += add;

    // SORT AFTER ADD
    sortStudents(s, n);

    // WRITE BACK
    fp = fopen("students.txt", "w");

    for(int i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %.2f\n",
                s[i].id,
                s[i].name,
                s[i].marks);
    }

    fclose(fp);
}
//  Delete by name 
void deleteByName()
{
    FILE *fp;
    struct Student s[200];
    int n = 0;
    char name[100];

    fp = fopen("students.txt", "r");

    if(fp != NULL)
    {
        while(fscanf(fp, "%d %s %f",
              &s[n].id,
              s[n].name,
              &s[n].marks) ==3)
        {
            n++;
        }
        fclose(fp);
    }

    printf("Enter name to delete: ");
    scanf("%s", name);

    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(strcmp(s[i].name, name) != 0)
        {
            s[j++] = s[i];
        }
    }

    n = j;

    // SORT AGAIN (safe practice)
    sortStudents(s, n);

    fp = fopen("students.txt", "w");

    for(int i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %.2f\n",
                s[i].id,
                s[i].name,
                s[i].marks);
    }

    fclose(fp);
}
// Display student  
void displayStudent()
{
    FILE *fp;
    struct Student s[200];
    int n = 0;

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
      printf("No file found\n");
      return;
    }

    while(fscanf(fp, "%d %s %f",
          &s[n].id,
          s[n].name,
          &s[n].marks) == 3)
    {
        n++;
    }

    fclose(fp);

    if(n == 0)
    {
        printf("No students found\n");
        return;
    }

    printf("\nID\tName\tMarks\n");
    printf("----------------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n",
               s[i].id,
               s[i].name,
               s[i].marks);
    }
}
void updateStudent()
{
    FILE *fp;
    struct Student s[200];
    int n = 0;
    char name[100];
    int found = 0;

    // READ FILE
    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("File not found\n");
        return;
    }

    while(fscanf(fp, "%d %s %f",
          &s[n].id,
          s[n].name,
          &s[n].marks) == 3)
    {
        n++;
    }

    fclose(fp);

    // INPUT NAME TO UPDATE
    printf("Enter name to update marks: ");
    scanf("%s", name);

    // FIND AND UPDATE
    for(int i = 0; i < n; i++)
    {
        if(strcmp(s[i].name, name) == 0)
        {
            printf("Enter new marks: ");
            scanf("%f", &s[i].marks);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("Student not found\n");
        return;
    }

    // WRITE BACK TO FILE
    fp = fopen("students.txt", "w");

    for(int i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %.2f\n",
                s[i].id,
                s[i].name,
                s[i].marks);
    }

    fclose(fp);

    printf("Marks updated successfully\n");
}