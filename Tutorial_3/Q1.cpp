#include <iostream>
#include <string>
using namespace std;

// class similar to struct
class Book {
    // member variables:
    private:
        string title;
        float price;
        string currency;

    public:
        Book(string a_title, float a_price, string a_currency) {
            title = a_title;
            price = a_price;
            currency = a_currency;
        }
};

int main () {
    // class can't be accessed directly like struct

    Book b1 ("C++ is Fun", 50.0, "RM"); // b1 is object
    
}