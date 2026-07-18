#include <iostream>
#include <string>
using namespace std;

class Appliance {
    protected:
    string name;

    public:
    Appliance (string a_name) : name(a_name) {} 

    virtual void operate() = 0;
};

class Fan : public Appliance {
    public:
    Fan (string a_name) : Appliance (a_name) {}

    virtual void operate() {
        cout << name << " is spinning" << endl;
    }
};

class WashingMachine : public Appliance {
    public:
    WashingMachine (string a_name) : Appliance (a_name) {}

    virtual void operate () {
        cout << name << " is washing" << endl;
    }
};

int main()
{
    Fan f("Fan");
    WashingMachine w("Washing Machine");

    Appliance* ptr;

    ptr = &f;
    ptr->operate();

    ptr = &w;
    ptr->operate();

    return 0;
}