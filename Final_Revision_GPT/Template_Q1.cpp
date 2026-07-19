#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swapValue (T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 25;
    double x = 3.5, y = 7.8;

    swapValue(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    swapValue(x, y);
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}