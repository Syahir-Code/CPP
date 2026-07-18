#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    double price;

public:
    // (i) Constructor to initialize title, author and price
    Book(string a_title, string a_author, double a_price)
    {
        // Q1(a)(i)
        title = a_title;
        author = a_author;
        price = a_price;
    }

    // (ii) Return the title
    string getTitle()
    {
        // Q1(a)(ii)
        return title;
    }

    // (iii) Display the title and author in the format:
    // Title: <title>
    // Author: <author>
    void displayBook()
    {
        // Q1(a)(iii)
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }

    // (iv) Return the price
    double getPrice()
    {
        // Q1(a)(iv)
        return price;
    }

    // (v) Update the price
    void setPrice(double a_price)
    {
        // Q1(a)(v)
        price = a_price;
    }
};

int main()
{
    Book b1("C++ Programming", "John Smith", 59.90);

    cout << "Book Title: " << b1.getTitle() << endl;
    b1.displayBook();

    return 0;
}