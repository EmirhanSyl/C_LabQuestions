#include <stdio.h>

struct Depertmant
{
    struct Depertmant *supporterDept;
    int id;
};

typedef struct Employee
{
    int id;
    char *name;
    char *surname;
    int salary;
    struct Company
    {
        char *compName;
        struct Depertmant depertmant;
    };

    struct Company comp;
}emp;




int main() {

    emp e1;
    e1.id = 0;
    e1.name = "emp1";
    e1.surname = "soy1";
    e1.salary = 1000;

    struct Depertmant dept = {1};

    struct Company company;
    company.compName = "Amazon";
    company.depertmant = dept;

    e1.comp = company;

    struct Employee e2 = {1, "emp2", "soy2", 1200};
    struct Employee e3 = {.id = 2, .name = "emp3", .salary = 1000};
    
    printf("%d \n", e1.comp.depertmant.id);
    return 0;
}