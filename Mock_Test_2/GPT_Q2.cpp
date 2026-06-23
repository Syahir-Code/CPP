#include <iostream>
#include <string>
using namespace std;

class PublisherInfo {
    private:
    string publisherName;
    string publisherAddress;

    public:
    PublisherInfo (string publisherName, string publisherAddress) {
        this->publisherName = publisherName;
        this->publisherAddress = publisherAddress;
    }

    void displayPublisher () {
        cout << "Publsiher Name: " << publisherName << endl;
        cout << "Address: " << publisherAddress << endl;
    }
};

class Book
{
private:
    string title;
    int bookID;
    double price;
    PublisherInfo publisher;

public:

    // Constructor to initialize all member variables
    Book(string a_title, int a_bookID, double a_price, string name, string add) :
    publisher (name, add)
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
        cout << "Book ID: " << bookID << endl;
        cout << "Price: " << price << endl;
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

    void showPublisherInfo () {
        publisher.displayPublisher();
    }
};

int main () {
    Book obj ("Data Structures", 3005, 89.50, "Tech Books Sdn Bhd", "No 25, Jalan Teknologi, Cyberjaya");
    obj.displayTitleID();
    obj.showPublisherInfo();
    return 0;
}