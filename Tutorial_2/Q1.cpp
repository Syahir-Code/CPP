#include <iostream>
using namespace std;

int factorial (int *num);

int main() {
    int  x=4;
    cout << "\nFactorial of " << x << " = " << factorial(&x);

    return 0;
}

int factorial (int *num) {
    int result=1;

    for (int i=1; i<=*num; i++) {
        result*=i;
    }
    return result;
}