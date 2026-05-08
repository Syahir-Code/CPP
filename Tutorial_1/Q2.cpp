#include <iostream>
using namespace std;

int main() {
    double bmi = 0.0;
    double mass, height;

    cout << "Get weight in kg: ";
    cin >> mass;
    cout << "Get height in meter: ";
    cin >> height;
    
    bmi = mass/(height*height);
    cout << "Your bmi = " << bmi << endl;

    cout << "Your weight category is: ";
    if (bmi < 18.5) {
        cout << "Underweight";
    }
    
    else if (bmi >= 18.5  && bmi <= 24.9) {
        cout << "Healthy";
    }
    
    else if (bmi >= 25.0 && bmi <= 29.9) {
        cout << "Overweight";
    }
    
    else if (bmi >= 30.0) {
        cout << "Obesity";
    }

    return 0;
}