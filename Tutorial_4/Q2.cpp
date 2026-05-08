#include <iostream>
#include <string>
using namespace std;

class Temperature {
    private:

    public:
        Temperature ();

};

int main () {
    Temperature t1('C', 100), t2('F', 100);

    cout << "t1 = " << t1.getCels() << "C\n";
    return 0;
}