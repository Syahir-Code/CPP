#include <iostream>
#include <string>
using namespace std;

class Temperature {
    private:
        double tempCel;
        double tempFar;

    public:
        Temperature () {
            tempCel = 0.0;
            tempFar = 32.0;
        }

        Temperature (char unit, double temp) {
            if  (unit == 'C') {
                tempCel = temp;
                tempFar = (9*tempCel/5) + 32;
            }

            else if (unit == 'F') {
                tempFar = temp;
                tempCel = (tempFar - 32)*5/9;
            }
            else {
                tempCel = 0.0;
                tempFar = 32.0;
            }
        }
    
        double getCels () {
            return  tempCel;
        }

        double getFar () {
            return tempFar;
        }

        void equal (Temperature t) {
            tempCel = t.tempCel;
            tempFar = t.tempFar;
        }
};

int main () {
    Temperature t1('C',100), t2('F',100);

    cout<<"t1 = "<<t1.getCels()<<" C\n";
    cout<<"t1 = "<<t1.getFar()<<" F\n";

    cout<<"t2 = "<<t2.getCels()<<" C\n";
    cout<<"t2 = "<<t2.getFar()<<" F\n";

    t1.equal(t2); // assign value in t2 to t1
    cout<<"After assigning t2 to t1"<<endl;
    cout<<"t1 = "<<t1.getCels()<<" C\n";
    cout<<"t1 = "<<t1.getFar()<<" F\n";

    return 0;
}