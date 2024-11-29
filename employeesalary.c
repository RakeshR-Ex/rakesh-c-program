#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    int n;
    float totalSalary = 0, averageSalary;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        totalSalary += employees[i].salary;
    }
    averageSalary = totalSalary / n;
    printf("\nThe average salary of employees is: %.2f\n", averageSalary);

    return 0;
}
