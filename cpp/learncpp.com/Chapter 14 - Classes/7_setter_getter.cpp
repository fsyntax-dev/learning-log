#include <iostream>
#include <string>
#include <string_view>

static int num{};

class Book{
private:
    std::string m_title{};
    std::string m_author{};
    int m_pages{};

public:
    void print(){
        std::cout << "Book  : " << ++num    << "\n";
        std::cout << "Title : " << m_title  << "\n";
        std::cout << "Author: " << m_author << "\n";
        std::cout << "Pages : " << m_pages  << "\n";
    };

    // Getter - return by const reference
    const std::string& getTitle() const {return m_title;}
    const std::string& getAuthor() const {return m_author;}
    const int& getPages() const {return m_pages;}

    // Setter
    void setTitle (std::string_view title){m_title = title;}
    void setAuthor(std::string_view author){m_author = author;}
    void setPages (int pages){m_pages = pages;}

};

std::ostream& operator <<(std::ostream& out, Book book){
    out << "Book  : "  << ++num << "\n" 
        << "Title : " << book.getTitle()  << "\n"
        << "Author: " << book.getAuthor() << "\n"
        << "Pages : " << book.getPages()  << "\n";
    return out;
}

int main(){

    Book bookone{};
    bookone.setTitle("A Concise Guide to Macro Economics");
    bookone.setAuthor("David A. Moss");
    bookone.setPages(233);

    std::cout << bookone << "\n";

    return 0;
}