#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book(string titleofBook, string authorofBook, double priceofBook) {
        title = titleofBook;
        author = authorofBook;
        price = priceofBook;
    }

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $ " << price << endl;
    }
};

int main() {
    Book book1("Bumi", "Tere Liye", 10);
    Book book2("Bulan", "Tere Liye", 12);

    cout << "Book 1 Details:" << endl;
    book1.displayDetails();
    cout << endl;

    cout << "Book 2 Details:" << endl;
    book2.displayDetails();

    return 0;
}
