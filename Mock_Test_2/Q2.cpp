#include <iostream>
#include <string>
using namespace std;

class ContactInfo {
    private:
    string address;
    string phoneNumber;

    public:
    ContactInfo (string address, string phoneNumber) {
        this->address = address;
        this->phoneNumber = phoneNumber;
    }

    string getAddress () {
        return address;
    }

    string getPhone ()  {
        return phoneNumber;
    }
};

class Student {
    private:
    string name;
    int id;
    float gpa;
    ContactInfo contact;

    public:
    // Constructor to initialize name, id, and gpa
    Student (string a_name, int a_id, float a_gpa, string address, string phoneNumber) :
    contact (address, phoneNumber)
    {
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

    void showContactInfo () {
        cout << " Address :" << contact.getAddress() << endl;
        cout << " Phone :" << contact.getPhone() << endl;
    }
};

int main () {
    Student obj("Amir Khan", 567891, 3.99, "No 789 , Clean Street, Kuala Lumpur, Malaysia", "603-8765123");
    obj.displayIDName();
    obj.showContactInfo();

    return 0;
}