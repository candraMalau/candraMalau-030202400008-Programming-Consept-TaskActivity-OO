#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;
    
    void bookDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book book1;
    book1.title = "Bumi";
    book1.author = "Tere Liye";
    book1.price = 10;
    // book1.bookDetails();

    Book book2;
    book2.title = "Bulan";
    book2.author = "Tere Liye";
    book2.price = 10;
    // book2.bookDetails();

    cout << "Book1 Details: " << endl;
    book1.bookDetails();

    cout << "Book1 Details: " << endl;
    book2.bookDetails();

    return 0;
}