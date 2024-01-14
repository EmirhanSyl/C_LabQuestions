#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>

using namespace std;

class Car
{

private:
    string brand;
    string model;
    int year;
    int price;

public:
    Car()
    {
        brand = "";
        model = "";
        year = 0;
    }

    Car(const string &brand, const string &model, int year)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    // Setter
    void setBrand(const string &brand)
    {
        this->brand = brand;
    }

    void setModel(const string &model)
    {
        this->model = model;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    void setPrice(int price)
    {
        this->price = price;
    }
    // Getter
    string getBrand() const
    {
        return this->brand;
    }

    string getModel() const
    {
        return this->model;
    }

    int getYear() const
    {
        return this->year;
    }

    int getPrice() const
    {
        return this->price;
    }

    void displayInfo() const
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
    void setCarDetails()
    {
        cout << "Enter car details:" << endl;
        cout << "Brand: ";
        cin >> this->brand;

        cout << "Model: ";
        cin >> this->model;

        cout << "Price: ";
        cin >> this->price;

        cout << "Year: ";
        cin >> this->year;
    }
};

,,

int main()
{
    Car c1("TOGG", "T10X", 2022);
    cout << "Parameterized Constructor:" << endl;
    c1.displayInfo();

        return 0;
}