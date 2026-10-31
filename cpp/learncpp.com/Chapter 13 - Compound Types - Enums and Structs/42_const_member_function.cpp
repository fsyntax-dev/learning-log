#include <iostream>
#include <string>

// const member function - immutable function doesn't change object member variable

struct Book{
    std::string title{};
    int pages{};

    void print() const {
        std::cout << "Title: " << title << "\t";
        std::cout << "Pages: " << pages << "\n";
    }
};

int main(){
                                                    // const function can call both:
    const Book book{"Introduction to C++", 194};    // const object
    Book notebook{"Colouring Book", 100};           // non const object
    
    book.print();
    notebook.print();

    return 0;
}

