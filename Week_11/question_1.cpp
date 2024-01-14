#include <iostream>
#include <string>
#include <vector>

using namespace std;
static int initiationCount = 0;
static int destroyCount = 0;
template<typename base, typename T>
inline bool instanceof(const T *ptr){
    return dynamic_cast<const base*>(ptr)!=nullptr;
}

class Employee
{
private:
    string firsName;
    string lastName;
    int salary;
public:

    Employee(int salary, string firstName, string lastName){
        this->firsName = firstName;
        this->lastName = lastName;
        this->salary = salary;
        initiationCount++;
    }
    ~Employee()
    {
        cout << "GOOD BYE!" << firsName << " " << lastName << endl;
        destroyCount++;
    }
    int getSalary(){
        return salary;
    }
    string getFirstName(){
        return firsName;
    }
    string getLastName(){
        return lastName;
    }

    void setSalary(int salary){
        this->salary = salary;
    }
    void setFirstName(string firsName)
    {
        this->firsName = firsName;
    }
    void setLastName(string lastName)
    {
        this->lastName = lastName;
    }
};

class Manager : public Employee
{
private:
    
public:
    Manager(int salary, string firstName, string lastName) : Employee(salary, firstName, lastName){}
};

class Factory
{
private:
    vector<Employee> employees;

public:
    void addEmployee(Employee employee)
    {
        employees.push_back(employee);
    }

    Employee getEmployee(int index){
        return employees.at(index);
    }

    void printEmployeeTypeNumber(){
        int normal_emp = 0;
        for (Employee emp: employees)
        {
            if(instanceof<Employee>(&emp)){
                continue;
            }
            normal_emp++;
        }
        cout << "Normal Employees: " << normal_emp << endl;
        
    }
};

void func(){
    Employee e1(1,"e", "d");
}

int main()
{
    Employee e1(1000, "Emirhan", "Soylu");
    Employee e2(1000, "a", "b");
    func();
    Manager m1(1000, "c", "d");

    Factory factory;
    factory.addEmployee(e1);
    factory.addEmployee(e2);
    factory.addEmployee(m1);
    func();

    cout << factory.getEmployee(2).getFirstName() << endl;
    factory.printEmployeeTypeNumber();
    func();

    cout << initiationCount << endl;
    cout << destroyCount << endl;
    return 0;
}
