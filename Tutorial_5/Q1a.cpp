#include <iostream>
using namespace std;

class Fraction {
    public:
    int numerator, denominator;
    
    // temporary object to store value of "result" variable
    Fraction () { }

    Fraction (int num_a, int den_a) {
        numerator = num_a;
        denominator = den_a;
    }

    void display () {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction add (Fraction f) {
        int n, d;
        
        // this->numerator belongs to f1
        // this->denominator belongs to f1
        n = (this->numerator * f.denominator) + (this->denominator * f.numerator);
        d = (this->denominator * f.denominator);

        return Fraction(n, d);
    }

    Fraction multiply (Fraction f) {
        int n, d;

        n = numerator*f.numerator;
        d = denominator*f.denominator;

        return Fraction (n, d);
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(1, 2);
    Fraction result;
    
    cout << "f1: ";
    f1.display();
    
    cout << "f2: ";
    f2.display();
    
    
    cout << "f1 + f2: ";
    result = f1.add(f2);
    result.display();
    
    cout << "f1 * f2: ";
    result = f1.multiply(f2);
    result.display(); 
}