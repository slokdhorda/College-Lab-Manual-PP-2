#include <stdio.h>

struct Employee {
    int empcode;
    char empname[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e, highest;
    int n, i;

    fp = fopen("employee.TXT", "wb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("Emp Code: "); scanf("%d", &e.empcode);
        printf("Name: ");     scanf("%s", e.empname);
        printf("Salary: ");   scanf("%f", &e.salary);
        fwrite(&e, sizeof(struct Employee), 1, fp);
    }
    fclose(fp);

    fp = fopen("employee.TXT", "rb");
    highest.salary = -1;
    while (fread(&e, sizeof(struct Employee), 1, fp)) {
        if (e.salary > highest.salary) {
            highest = e;
        }
    }
    fclose(fp);

    if (highest.salary != -1) {
        printf("\n--- Employee with Highest Salary ---\n");
        printf("Code: %d\n", highest.empcode);
        printf("Name: %s\n", highest.empname);
        printf("Salary: %.2f\n", highest.salary);
    } else {
        printf("No records found.\n");
    }

    return 0;
}
