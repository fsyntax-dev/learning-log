#include <iostream>
using namespace std;


class Book{
public:
    string title;
    string author;
    string publisher;
    int edition;
    int chapter;
    int pages;
    int year;
};

int main() 
{
    Book book1;
    Book book2;
    Book book3;

    book1.title     = "Magic Mind";
    book1.author    = "James R. Doty";
    book1.publisher = "Penguin Random House LLC";
    book1.edition   = 1;
    book1.chapter   = 8;
    book1.pages     = 508;
    book1.year      = 2024;

    book2.title     = "Bayesian Statistics the Fun Way";
    book2.author    = "Will Kurt";
    book2.publisher = "No Starch Press";
    book2.edition   = 1;
    book2.chapter   = 19;
    book2.pages     = 397;
    book2.year      = 2019;

    book3.title      = "Python for Algorithmic Trading";
    book3.author     = "Yves Hilpisch";
    book3.publisher  = "O’Reilly Media, Inc.";
    book3.edition    = 2;
    book3.chapter    = 10;
    book3.pages      = 1732;
    book3.year       = 2021;


    cout << "Book Title: " << "\n";
    cout << book1.title << "\n";
    cout << book2.title << "\n";
    cout << book3.title << "\n";



    

    return 0;
    
}