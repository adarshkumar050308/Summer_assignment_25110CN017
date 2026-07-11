#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

typedef struct {
    int id;
    char name[50];
    char department[50];
    float salary;
} Employee;

int main(void) {
    int n, i;
    Employee employees[MAX_EMPLOYEES];

    printf("Enter number of employees: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_EMPLOYEES) {
        printf("Invalid number of employees.\n");
        return 1;
    }
    while (getchar() != '\n') {
    }

    for (i = 0; i < n; ++i) {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &employees[i].id);
        while (getchar() != '\n') {
        }

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("Department: ");
        fgets(employees[i].department, sizeof(employees[i].department), stdin);
        employees[i].department[strcspn(employees[i].department, "\n")] = '\0';

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        while (getchar() != '\n') {
        }
    }

    printf("\nEmployee Records\n");
    printf("----------------\n");
    for (i = 0; i < n; ++i) {
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }

    return 0;
}
