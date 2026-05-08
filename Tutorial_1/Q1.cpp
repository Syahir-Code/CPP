#include <iostream>
#include <cmath>
using namespace std;

int opt;
int main () {
do { 
    int x1, x2, int_result;
    int add, sub, mul, rem;
    double result, div;

    cout << "\n\nSimple calculator\n" << "Enter option\n" << "1)+\n"
    << "2)-\n" << "3)*\n" << "4)/\n" <<  "5) mod(x1,x2)\n" 
    << "-1) Exit" << endl;

    cout << "\nYour selection -> ";
    cin >> opt;
    
    if (opt == -1) {
        return 0;
    }

    cout << "Enter first number: ";
    cin >> x1;
    cout << "Enter second number: ";
    cin >> x2;
    cout << endl;

    if (opt == 1) {
        int_result = x1+x2;
        cout << x1 << " + " << x2 << " = " << int_result;
    }

    else if (opt == 2) {
        int_result = x1 - x2;
        cout << x1 << " - " << x2 << " = " << int_result;
    }

    else if (opt == 3) {
        int_result = x1 * x2;
        cout << x1 << " * " << x2 << " = " << int_result;
    }

    else if (opt == 4) {
        result = (double)x1 / x2;
        cout << x1 << " / " << x2 << " = " << result;
    }

    else if (opt == 5) {
        int_result = remainder(x1, x2);
        cout << x1 << " % " << x2 << " = " << int_result;
    }

} while (true);

    return 0;
}