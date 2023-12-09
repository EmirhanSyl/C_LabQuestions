#include <stdio.h>

// typedef struct, enum etc... struct1{}struct1;

typedef struct Department
{
    char *name;
} Department;

typedef struct Employee
{
    char *name;
    char *surname;
    int salary;
    Department *department;
}Employee;

typedef struct Company
{
    char *name;
    Employee *emp;
    struct Company *supporterCmp;
} Company;

int main() {
    Department engineering = {.name = "Engineering"};
    Employee emp1;
    emp1.name = "Emirhan";
    emp1.surname = "Soylu";
    emp1.salary = 1000;
    emp1.department = &engineering;
    
    Employee emp2 = {.name = "Sare", .surname = "Bayram", 1100, .department = &engineering};

    Employee emp3 = {"Zahid", "Baltaci", 1200, &engineering};

    Company comp = {.name = "Zamazon", .emp = &emp2};

    printf("Employee: %s,\nEmployee: %s,\nEmployee: %s\n", emp1.name, emp2.name, emp3.name);
    printf("Department of %s is %s\n", emp3.name, emp3.department->name);
    printf("Dept: %s\n", comp.emp->department->name);
    return 0;
}