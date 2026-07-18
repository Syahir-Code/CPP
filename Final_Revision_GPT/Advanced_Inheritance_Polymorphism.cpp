#include <iostream>
#include <string>
using namespace std;

class Employee {
    protected:
    string name;
    double salary;

    public:
    Employee (string name, double salary) {
        this->name = name;
        this->salary = salary;
    }

    virtual double calculateBonus() = 0;

    void display() {
        cout << "Employee: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Bonus: " << calculateBonus() << endl;
    }
};

class Manager : public Employee {
    public:
    Manager (string name, double salary) : Employee (name, salary) {}

    virtual double calculateBonus () {
        return 0.2*salary;
    }
 };

 class Engineer : public Employee {
    public:
    Engineer (string name, double salary) : Employee (name, salary) {}

    virtual double calculateBonus () {
        return 0.1*salary;
    }
 };

int main()
{   
    Manager m("Alice", 5000);
    Engineer e("Bob", 4000);
    /*
    Employee *ptr;

    ptr = &m;
    ptr->display();

    cout << endl;

    ptr = &e;
    ptr->display(); */

    Employee *employees[2];

    employees[0] = &m;
    employees[1] = &e;

    for(int i = 0; i < 2; i++)
    {
        employees[i]->display();
        cout << endl;
    }

    return 0;
}