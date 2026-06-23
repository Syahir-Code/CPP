#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    string name;
    int id;
    float gpa;

    public:
    // Constructor to initialize name, id, and gpa
    Student (string a_name, int a_id, float a_gpa) {
        // Q1(a)(i)
        name = a_name; id = a_id; gpa = a_gpa;
    }

    // Return the student's name
    string getName () {
        // Q1(a)(ii)
        return name;
    }

    // Display student's name and ID
    void displayIDName () {
        // Q1(a)(iii)
        cout << "\nName :" << name << "  ID :" << id << endl;
    }

    // Return the student's GPA
    float getGPA () {
        // Q1(a)(iv)
        return gpa;
    }

    // Update the student's GPA
    void setGPA (float a_gpa) {
        // Q1(a)(v)
        gpa = a_gpa;
    }
};

class ContactInfo {
    private:
    string address;
    string phoneNumber;

    public:
    ContactInfo (string address, string phoneNumber) {
        this->address = address;
        this->phoneNumber = phoneNumber;
    }

    void displayContact () {
        cout << "\nAddress: " << address << endl;
        cout << "Phone: " << phoneNumber << endl;
    }
};

int main () {
    Student s1("Alice", 1001, 3.8);
    cout << "\nStudent Name: "  << s1.getName();
    s1.displayIDName();

    ContactInfo obj ("123 Street Cyberjaya Malaysia", "603-83124311");
    obj.displayContact ();

    return 0;
}