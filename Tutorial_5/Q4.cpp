#include <iostream>
using namespace std;

class Author {
    private:
        string name;
        string phone;
    
    public:
        Author () {
            name="None"; phone="123-456 7890";
        }

        Author (string name, string phone) {
            this->name = name;
            this->phone = phone;
        }

        void print_info () const {
            cout << ", Author's name: " << name << ", Author's phone: "
            << phone << endl;
        }
};

class Book {
    private:
        string title;
        int pages;
        Author author;
    public:
        Book() { 
            title="None"; pages=0; 
        }

        Book(string name, string phone, string t, int p) : 
        author(name, phone), title(t), pages(p) {

        }
        
        void print(int id) const {
            cout <<id <<" Title: " << title << ", Pages: " << pages;
            author.print_info();
        }
};

class Library {
    private:
        Book* pbooks; // Library has many books
    public:
        // Library() : books{Book("Book 1", 100), Book("Book 2", 200), Book("Book 3",
        // 300)} {}

        Library(int numBook) {
            pbooks = new Book[ numBook ] ;
        }

        void printBooks() const {
            for (int i = 0; i < 3; ++i) {
                pbooks[i].print(i);
            }
        }

        void addBook( Book bb, int i) {
            pbooks[i] = bb;
        }
};

int main() {
    Library library(3);
    library.printBooks();

    Book bb[3];
    bb[0] = Book("Syahir", "013-400 5678", "Hello Guys", 200) ;
    bb[1] = Book("JK Rowling", "014-344 6787", "Bye Bye", 300) ;
    bb[2] = Book("Abdul Ahmad", "012-455 2394", "The book", 350) ;

    // Alternative is Book bb[3] = {Book("Hello Guys",200) ,Book("Bye Bye",300) ,Book("The book", 350) } ;
    for (int i=0; i<3 ; i++) { 
        library.addBook( bb[i], i); 
    }
    
    cout <<endl;
    library.printBooks();
    return 0;
}
