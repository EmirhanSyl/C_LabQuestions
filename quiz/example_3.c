#include <stdio.h>

typedef struct Employee
{
    int id;
    char *name;
    char *surname;
    int salary;

    void (*zamliSalary)(struct Employee *self);
} emp;

void zamliSalary(struct Employee *self)
{
    printf("%f\n", (self->salary * 1.15));
}

int main()
{

    emp e1;
    e1.id = 0;
    e1.name = "emp1";
    e1.surname = "soy1";
    e1.salary = 1000;

    e1.zamliSalary = zamliSalary;
    e1.zamliSalary(&e1);

    return 0;
}