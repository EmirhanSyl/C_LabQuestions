#include <stdio.h>
#include <stdlib.h>


typedef struct Employee
{
    int employeeID;
    int salary;
} Employee;

int calculateTotalSalary(Employee *arr){
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += arr[i].salary;
    }

    return total;
}

int main() {
    Employee emp1 = {.employeeID = 0, .salary = 100};
    Employee emp2 = {.employeeID = 1, .salary = 200};
    Employee emp3 = {.employeeID = 2, .salary = 300};

    Employee *arr = calloc(3, sizeof(Employee));
    arr[0] = emp1;
    arr[2] = emp2;
    arr[3] = emp3;

    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += arr[i].salary;
    }

    printf("%d\n", total);
    return 0;
}