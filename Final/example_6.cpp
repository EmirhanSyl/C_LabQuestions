#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee
{
public:
    int salary;
    string firstName;
    string lastName;
    string type;

    Employee(int newSalary, string firstName, string lastName, string type)
        : salary(newSalary), firstName(firstName), lastName(lastName), type(type){};
};

class Manager : public Employee
{
public:
    Manager(int newSalary, string firstName, string lastName)
        : Employee::Employee(newSalary, firstName, lastName, "Manager"){};
};

class Department{
public:
    vector<Employee> employees;
    int totalEmpCount;

    bool operator==(Department dept){
        if (employees.size() != dept.employees.size())
        {
            return false;
        }

        for (Employee emp: employees)
        {
            bool flag = false;
            for (Employee emp_dept : dept.employees)
            {
                if(emp.firstName == emp_dept.firstName){
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                return false;
            }
        }
        return true;
    }
};

class Factory{
public:
    vector<Employee> employees;
    Department departments[10];
    const int departmentsCount=10;

    void addEmployee(Employee e){
        employees.push_back(e);
    }

    Department operator[](int index){
        if (departmentsCount <= index)
        {
            throw 404;
        }
        
        return departments[index];
    }
};

int main(int argc, char const *argv[])
{
    Factory f1;
    Employee e1(100, "Emirhan", "Soylu", "Employee");
    Employee e2(100, "Sare", "Bayram", "Employee");
    Employee e3(100, "Asim", "Kutluer", "Employee");
    Employee e4(100, "Rana", "Güngör", "Employee");
    Employee e5(100, "Zahid", "Baltaci", "Employee");

    Department dept1;
    dept1.employees.push_back(e2);
    dept1.employees.push_back(e5);

    Department dept2;
    dept2.employees.push_back(e2);
    dept2.employees.push_back(e5);

    f1.departments[0] = dept1;
    f1.departments[1] = dept2;

    cout << f1[11].employees[0].firstName << endl;

    if(dept1 == dept2){
        cout << "Employees are the same" << endl;
    }else{
        cout << "Employees are not the same" << endl;
    }

    return 0;
}
