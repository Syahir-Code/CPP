#include <iostream>
#include <string>
using namespace std;

class Publisher
{
private:
    string name;
    string country;

public:
    Publisher(string a_name, string a_country)
    {
        // Initialize member variables
        name = a_name;
        country = a_country;
    }

    void displayPublisher()
    {
        cout << "Publisher: " << name << endl;
        cout << "Country: " << country << endl;
    }
};


class Book
{
private:
    string title;
    string author;
    double price;
    Publisher publisher;

public:
    // (i) Constructor to initialize title, author and price
    Book(string a_title, string a_author, double a_price, string a_name, string a_country) :
    publisher (a_name, a_country)
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
        cout << "Price: " << price << endl;
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

    void showPublisher () {
        publisher.displayPublisher ();
    }
};

int main()
{
    Book obj("Object Oriented Programming", "Alice Tan", 79.90, "TechPress", "Malaysia");

    obj.displayBook();
    obj.showPublisher();

    return 0;
}
