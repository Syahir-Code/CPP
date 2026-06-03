#include <iostream>
#include <string>
using namespace std;

class Purchase {
    private:
        int qty;
        float price;
        string itemName;
        float total = 0;

        int final_qty = 0;
        float final_price = 0.0;

    public:
        Purchase (string name, int quantity, float p);
        void set_data (string name, int quantity, float p);
        float calculate ();
        void print ();
        void printtotal();
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
    final_qty += qty;
    final_price += total;
    return total;
}


void Purchase::print () {
    cout << "=========================" << endl;
    cout << "Subtotal  : RM ";
    cout << total << endl;
    cout << "=========================" << "\n\n";
}

void Purchase::printtotal () {
    cout << "=========================" << endl;
    cout << "       GRAND TOTAL        " << endl;
    cout << "=========================" << endl;

    cout << "Total number of items   : ";
    cout << final_qty << endl;

    cout << "Total amount to be paid : RM ";
    cout << final_price << endl;
}

int main () {
    string N;
    int Q;
    float P;

    Purchase p1 (" ", 0, 0.0); 

    cout << "=========================" << endl;
    cout << "          WELCOME         " << endl;
    cout << "=========================" << endl;

    do {
        cout << "Enter item <'Q' to quit> : ";
        cin >> N;

        if (N == "Q") {
            p1.printtotal();
            return 0;
        }

        else {
            cout << "Enter quantity : ";
            cin >> Q;

            cout << "Enter price    : RM ";
            cin >> P;

            p1.set_data (N, Q, P);
            p1.calculate();
            p1.print();
        }

    } while (true);

    
    return 0;
}