#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Pair {
    private:
    T value1;
    T value2;

    public:
    Pair (T a_value1, T a_value2) : value1(a_value1), value2(a_value2) {}

    T getMax () {
        if (value1 > value2) return value1;
        else return value2;
    }
};


int main()
{
    Pair<int> p1(15, 8);
    Pair<double> p2(6.2, 9.8);

    cout << "Maximum integer: " << p1.getMax() << endl;
    cout << "Maximum double: " << p2.getMax() << endl;

    return 0;
}