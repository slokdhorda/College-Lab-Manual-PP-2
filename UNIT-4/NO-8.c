
#include <stdio.h>
#include <stdlib.h>

// Define the structure for employee records
struct Employee {
    int empcode;
    char empname[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int n, i;


    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Emp Code: ");
        scanf("%d", &emp.empcode);
        printf("Emp Name: ");
        scanf("%s", emp.empname);
        printf("Salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(struct Employee), 1, fp);
    }
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Displaying Employee Records from File ---\n");
    printf("%-10s %-20s %-10s\n", "EmpCode", "EmpName", "Salary");

    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        printf("%-10d %-20s %-10.2f\n", emp.empcode, emp.empname, emp.salary);
    }

    fclose(fp);
    return 0;
}
