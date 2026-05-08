#include <iostream>
using namespace std;

int side;

void prompt () {
    cout << "Enter the length of the side of the square between 1 to 20";
}

void ending () {
    cout << "Ending  program. Only integer values between 1 and 20 accepted\n" 
    << endl;
}

int main () {
    cout << "\n";
    prompt();
    cout << "\n<any other value to end>: ";
    cin >> side;
    
    if (side<1 || side>20) {
        ending();
    }

    else {
        do {
        for (int m=1; m<=side; m++) {
            for (int n=1; n<=side; n++) {
                cout << "*  ";
            }
            cout << endl;
        }

        prompt();
        cout << ": ";
        cin >> side;

    } while (side>=1 && side <=20);
    
        ending();
    }

    return 0;
}