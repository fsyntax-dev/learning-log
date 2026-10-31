#include <iostream>

struct Date{
    int day{};
    int month{};
    int year{};
};

void printDate(const Date& date){
    std::cout << "Today date is " << date.day   << "." 
                                  << date.month << "." 
                                  << date.year  << "\n";
}

int main(){

    Date today {5, 10, 2025};

    printDate(today);

    return 0;
}