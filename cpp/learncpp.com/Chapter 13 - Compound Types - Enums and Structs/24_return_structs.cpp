#include <iostream>
#include <string>

struct Book{
    std::string title{};
    std::string author{};
    int pages{};
};

Book genBook(std::string title, std::string author, int pages){
    return Book{title, author, pages};
}

void printBookInfo(Book& info){
    std::cout << "Title: "  <<info.title << "\t";
    std::cout << "Author: " <<info.author << "\t";
    std::cout << "Pages: "  <<info.pages << "\t";
}


int main(){

    Book b1{genBook("Introduction to C++", "Alex Smith", 320)};

    printBookInfo(b1);

    return 0;
}