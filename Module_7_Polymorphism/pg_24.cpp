#include <iostream>
#include <string>
using namespace std;

class Shape { // ABC (Abstract Base Class)
    protected:
        float m_area;

    public:
        virtual float get_area() = 0; // pure virtual function
};

class Rectangle : public Shape {
    private:
        float m_width, m_height;

    public:
        Rectangle () {}
        Rectangle (float w,  float h) {
            m_width = w;
            m_height = h;
        }

        float get_area() {  //must be same function name from base class
            m_area = m_width*m_height;
            return m_area;
        }
};

class Circle : public Shape {
    private:
        float m_radius;
    
    public:
        Circle () {}
        Circle (float m_radius) {
            this->m_radius = m_radius;
        }

        float get_area() {
            m_area = 3.14*m_radius*m_radius;
            return m_area;
        }
};

int main () {
    Shape *s;
    s= new Circle (10.1);
    cout << "\nArea of circle: " << s->get_area();

    s= new Rectangle (5.5, 6.7);
    cout << "\nArea of rectangle: " << s->get_area() << endl;

    return 0;
}