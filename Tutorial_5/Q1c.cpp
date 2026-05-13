#include <iostream>
#include <cmath>
using namespace std;

class Point {
    public:
    int x, y;

    Point () {

    }

    Point (int x_a, int y_a) {
        x = x_a;
        y = y_a;
    }
};

class Line {
    public:
    Point point1, point2;

    Line () {

    }
    
    Line (Point p1, Point p2) {
        point1 = p1;
        point2 = p2;
    }

    double length () {
        double result = pow((point2.y-point1.y), 2) + pow((point2.x-point1.x), 2);
        result = sqrt(result);
        return result;
    }

};

int main () {
    Point p1(0, 0);
    Point p2(3, 4);

    Line line1(p1, p2);

    cout << "Length of line: " << line1.length() << endl;

    return 0; 

}