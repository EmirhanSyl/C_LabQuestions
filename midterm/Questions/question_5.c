#include <stdio.h>
#include <stdlib.h>

typedef struct Child
{
    char *name;
} Child;

typedef union uni
{
    Child *children;
    int stp;
} uni;

typedef struct Employee
{
    int employeeID;
    int salary;
    uni *children;
} Employee;

int main() {
    printf("Hello, World!\n");
    return 0;
}