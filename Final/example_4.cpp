#include <iostream>
#include <string>
#include <vector>

using namespace std;
static int initiationCount = 0;
static int destroyCount = 0;

class Employee
{
public:
    string name;
    string surname;

    Employee(string name, string surname): name(name), surname(surname){initiationCount++;};
    ~Employee(){        
        cout << "GOOD BYE! " << name << " " << surname << endl;
        destroyCount++;
    }
};

Employee createGarbageEmp()
{
    Employee e1("Emirhan", "Soylu");
    return e1;
}

int main(int argc, char const *argv[])
{
    Employee e1("Emirhan", "Soylu");
    return 0;
}

