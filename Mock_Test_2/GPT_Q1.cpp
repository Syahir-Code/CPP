#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    int bookID;
    double price;

public:

    // Constructor to initialize all member variables
    Book(string a_title, int a_bookID, double a_price)
    {
        // Q1(a)(i)
        title = a_title;
        bookID = a_bookID;
        price = a_price;
    }

    // Return the title
    string getTitle()
    {
        // Q1(a)(ii)
        return title;
    }

    // Display the title and book ID
    void displayTitleID()
    {
        // Q1(a)(iii)
        cout << "Title: " << title << endl;
        cout << "ID: " << bookID << endl;
    }

    // Return the price
    double getPrice()
    {
        // Q1(a)(iv)
        return price;
    }

    // Update the price
    void setPrice(double a_price)
    {
        // Q1(a)(v)
        price = a_price;
    }
};

int main()
{
    Book b1("C++ Programming", 2001, 59.90);

    cout << "Book Title: " << b1.getTitle() << endl;
    b1.displayTitleID();

    return 0;
}