#include <iostream>
#include <string>
using namespace std;

class Purchase {
    private:
        int qty;
        float price;
        string itemName;
        float total = 0;

    public:
        Purchase (string name, int quantity, float p);
        void set_data (string name, int quantity, float p);
        float calculate ();
        void print ();
};


Purchase::Purchase (string name, int quantity, float p) {
    itemName = name;
    qty = quantity;
    price = p;
}

void Purchase::set_data (string name, int quantity, float p) {
    itemName = name;
    qty = quantity;
    price = p;
}

float Purchase::calculate () {
    total = qty*price;
    return total;
}

void Purchase::print () {
    cout << "Name: " << itemName << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Price: " << price << endl;
    cout << "Total: "  <<  total << endl;
    cout << endl;
}

int main () {
    Purchase p1 ("Apple", 20, 0.50);
    p1.calculate();
    p1.print();

    p1.set_data ("Banana", 30, 0.25);
    p1.calculate();
    p1.print();

    return 0;
}