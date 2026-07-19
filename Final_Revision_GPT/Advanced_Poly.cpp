#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class IPayable {
    public:
    virtual double calculateSalary() = 0;
};

class Employee : public IPayable {
    protected:
    string name;

    public:
    Employee (string a_name) : name(a_name) {}

    virtual void display () {
        cout << "Employee: " << name << endl;
        cout << fixed << setprecision(2);
        cout << "Salary : " << calculateSalary() << endl;
    }
};

class FullTimeEmployee : public Employee {
    protected:
    double monthlySalary;

    public:
    FullTimeEmployee (string name, double m) : Employee (name) {
        monthlySalary = m;
    }

    virtual double calculateSalary (){
        return monthlySalary;
    }
};

class SalesEmployee : public FullTimeEmployee {
    private:
    double sales;

    public:
    SalesEmployee (string name, double m, double s) : 
    FullTimeEmployee (name, m) {
        sales = s;
    }

    virtual double calculateSalary () {
        return monthlySalary + sales*0.08;
    }
};

class PartTimeEmployee : public Employee {
    private:
    int hoursWorked;
    double hourlyRate;

    public:
    PartTimeEmployee (string n, int hW, double hR):
    Employee (n) {
        hoursWorked = hW;
        hourlyRate = hR;
    };

    virtual double calculateSalary () {
        return hoursWorked * hourlyRate;
    }
};

int main()
{
    FullTimeEmployee f("Alice", 4200);
    SalesEmployee s("John", 3500, 25000);
    PartTimeEmployee p("Bob", 60, 35);

    IPayable* payroll[3];

    payroll[0] = &f;
    payroll[1] = &s;
    payroll[2] = &p;

    Employee* emp[3];

    emp[0] = &f;
    emp[1] = &s;
    emp[2] = &p;

    cout << "=== Employee Details ===" << endl;

    for(int i=0;i<3;i++)
    {
        emp[i]->display();
        cout << endl;
    }

    cout << "\n=== Payroll ===" << endl;

    double total = 0;

    for(int i=0;i<3;i++)
    {
        total += payroll[i]->calculateSalary();
    }

    cout << fixed << setprecision(2);
    cout << "Total Payroll = " << total << endl;

    return 0;
}