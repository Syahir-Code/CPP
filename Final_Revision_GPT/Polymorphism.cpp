#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Transport {
    protected:
    string name;

    public:
    Transport (string name) {
        this->name = name;
    }

    virtual double calculateCost() = 0;

    virtual void display() {
        cout << fixed << setprecision(2);
        cout << name << " cost: " << calculateCost() << endl;
    }
};

class Bus: public Transport {
    private:
    int passengers;

    public:
    Bus (string name, int p) : Transport (name) {
        passengers = p;
    }

    virtual double calculateCost () {
        return passengers*2.5;
    }
};

class Train : public Transport {
    private:
    double distance;

    public:
    Train (string name, double distance) : Transport (name) {
        this->distance = distance;
    }

    virtual double calculateCost () {
        return distance*0.80;
    }
};

int main()
{
    Bus bus("City Bus", 12);
    Train train("Express Train", 50.0);

    Transport* ptr;

    ptr = &bus;
    ptr->display();

    ptr = &train;
    ptr->display();

    return 0;
}

