#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    protected:
    string brand;

    public:
    Vehicle (string brand) {
        this->brand = brand;
    }

    void displayVehicle () {
        cout << "Vehicle Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
    private:
    int doors;
    
    public:
    Car (string a_brand, int a_doors) : Vehicle (a_brand), doors(a_doors) {
        
    }       
    
    void displayCar () {
        displayVehicle();
        cout << "Number of Doors: " << doors << endl;
    }
};

int main()
{
    Car c1("Toyota", 4);
    c1.displayCar();

    return 0;
}