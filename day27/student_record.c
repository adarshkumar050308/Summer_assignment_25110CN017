#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define FILENAME "students.dat"

typedef struct {
    char id[16];
    char name[64];
    int age;
    float gpa;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

void clearInput(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void loadStudents(void) {
    FILE *file = fopen(FILENAME, "rb");
    if (!file) {
        return;
    }
    fread(&studentCount, sizeof(studentCount), 1, file);
    fread(students, sizeof(Student), studentCount, file);
    fclose(file);
}

void saveStudents(void) {
    FILE *file = fopen(FILENAME, "wb");
    if (!file) {
        printf("Unable to save records.\n");
        return;
    }
    fwrite(&studentCount, sizeof(studentCount), 1, file);
    fwrite(students, sizeof(Student), studentCount, file);
    fclose(file);
}

void addStudent(void) {
    if (studentCount >= MAX_STUDENTS) {
        printf("Student limit reached.\n");
        return;
    }
    Student s;

    printf("Enter student ID: ");
    fgets(s.id, sizeof(s.id), stdin);
    s.id[strcspn(s.id, "\n")] = '\0';

    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter age: ");
    if (scanf("%d", &s.age) != 1) {
        printf("Invalid input.\n");
        clearInput();
        return;
    }
    printf("Enter GPA: ");
    if (scanf("%f", &s.gpa) != 1) {
        printf("Invalid input.\n");
        clearInput();
        return;
    }
    clearInput();

    students[studentCount++] = s;
    saveStudents();
    printf("Student added successfully.\n");
}

void displayStudents(void) {
    if (studentCount == 0) {
        printf("No student records found.\n");
        return;
    }
    printf("\n%-10s %-20s %-5s %-5s\n", "ID", "Name", "Age", "GPA");
    printf("------------------------------------------------\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%-10s %-20s %-5d %-5.2f\n",
               students[i].id,
               students[i].name,
               students[i].age,
               students[i].gpa);
    }
}

int findStudentIndex(const char *id) {
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].id, id) == 0) {
            return i;
        }
    }
    return -1;
}

void searchStudent(void) {
    char id[16];
    printf("Enter student ID to search: ");
    fgets(id, sizeof(id), stdin);
    id[strcspn(id, "\n")] = '\0';

    int index = findStudentIndex(id);
    if (index == -1) {
        printf("Student not found.\n");
        return;
    }
    printf("\nID: %s\nName: %s\nAge: %d\nGPA: %.2f\n",
           students[index].id,
           students[index].name,
           students[index].age,
           students[index].gpa);
}

void updateStudent(void) {
    char id[16];
    printf("Enter student ID to update: ");
    fgets(id, sizeof(id), stdin);
    id[strcspn(id, "\n")] = '\0';

    int index = findStudentIndex(id);
    if (index == -1) {
        printf("Student not found.\n");
        return;
    }
    printf("Enter new name (leave blank to keep current): ");
    char name[64];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    if (strlen(name) > 0) {
        strncpy(students[index].name, name, sizeof(students[index].name));
        students[index].name[sizeof(students[index].name) - 1] = '\0';
    }
    printf("Enter new age (0 to keep current): ");
    int age;
    if (scanf("%d", &age) == 1) {
        if (age > 0) {
            students[index].age = age;
        }
    } else {
        clearInput();
    }
    printf("Enter new GPA (-1 to keep current): ");
    float gpa;
    if (scanf("%f", &gpa) == 1) {
        if (gpa >= 0.0f) {
            students[index].gpa = gpa;
        }
    } else {
        clearInput();
    }
    clearInput();
    saveStudents();
    printf("Student record updated.\n");
}

void deleteStudent(void) {
    char id[16];
    printf("Enter student ID to delete: ");
    fgets(id, sizeof(id), stdin);
    id[strcspn(id, "\n")] = '\0';

    int index = findStudentIndex(id);
    if (index == -1) {
        printf("Student not found.\n");
        return;
    }
    for (int i = index; i < studentCount - 1; i++) {
        students[i] = students[i + 1];
    }
    studentCount--;
    saveStudents();
    printf("Student deleted successfully.\n");
}

int main(void) {
    loadStudents();
    int choice;

    do {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice.\n");
            clearInput();
            continue;
        }
        clearInput();

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: saveStudents(); printf("Exiting...\n"); break;
            default: printf("Invalid option.\n"); break;
        }
    } while (choice != 6);

    return 0;
}
