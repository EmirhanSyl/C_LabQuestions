#include <stdio.h>
#include <stdlib.h>

double zamliSalary(int salary){
    return salary * 1.1;
}

typedef struct Employee
{
    char *name;
    char *surname;
    int salary;
    void (*zamYap)(struct Employee *self);
} Employee;

void zamYapppppppppppp(Employee *self){
    self->salary *= 1.1;
}

int main() { 
    Employee emp1 = {.name = "emp", .surname = "emp1", .salary = 1000, .zamYap = zamYapppppppppppp};
    emp1.zamYap = zamYapppppppppppp;
    emp1.zamYap(&emp1);
    printf("%d\n", emp1.salary);
    return 0;
}