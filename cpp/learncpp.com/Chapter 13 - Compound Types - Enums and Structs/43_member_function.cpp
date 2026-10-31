#include <iostream>
#include <string>

static int num{1};

struct Book{
    std::string title{};
    std::string author{};
    int pages{};

    void print(){
        

        std::cout << "Book "    << num++ << ": ";
        std::cout << "Title: "  << title << "\t";
        std::cout << "Author: " << author<< "\t";
        std::cout << "Pages: "  << pages << "\n"; 
        
    }
};

std::ostream& operator <<(std::ostream& out, Book book){
    out << "Book " << num++ << ": " << "Title: " << book.title  << "\t"
                                     << "Author: "<< book.author << "\t"
                                     << "Pages: " << book.pages  << "\n";
    return out;
}

int main(){

    Book bookOne{"C++ for Dummies", "Alon Markov", 456};
    Book bookTwo{"Python for Dummies", "Barry Allen", 340};

    bookOne.print();
    bookTwo.print();

    std::cout << bookOne;
    std::cout << bookTwo;

    return 0;
}