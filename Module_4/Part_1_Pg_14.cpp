#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    string getName() { 
        return name; 
    }
};

class Time {
    public:
    int second, minutes, hour;

    Time () {
        second = 0;
        minutes = 0;
        hour = 0;
    }

    Time (int a_second, int a_minutes, int a_hour) {
        second = a_second;
        minutes = a_minutes;
        hour = a_hour;
    }

    void showTime () {
        cout << endl << "Hour: " << hour;
        cout << endl << "Minutes: " << minutes;
        cout << endl << "Seconds: " << second;
        cout << endl;
    }

    void set_time (int a_second, int a_minutes, int a_hour) {
        second = a_second;
        minutes = a_minutes;
        hour = a_hour;
    }

};

int main () {
    Time tm;
    tm.second = 59;
    
    Time tt (5, 10, 23);
    tt.showTime();
    
    tt.set_time (0, 0, 0);
    tt.showTime();

    return 0;
}