#include <iostream>
#include <string>

// constant member function - use const after function definition

struct Date{
    int day{};
    int month{};
    int year{};

    void print() const {
        std::cout << day << "." << month << "." << year << "\n"; 
    }
    void print(std::string_view prefix) const {
        std::cout << prefix << day << "." << month << "." << year << "\n";
    }
};

int main(){

    const Date today{18,7,2025};

    today.print("Today is ");

    return 0;
}