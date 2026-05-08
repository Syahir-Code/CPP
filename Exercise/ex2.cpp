#include <iostream>
using namespace std;

int main () {
    int marks [] = {74, 43, 58, 60, 90, 64, 70};
    int sum = 0;

    for (int i=0; i<7; i++) {
        sum += marks[i];
    }

    cout << "Sum: " << sum;
    return 0;
}