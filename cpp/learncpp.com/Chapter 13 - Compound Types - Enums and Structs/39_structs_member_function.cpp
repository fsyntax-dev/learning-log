#include <iostream>

// structs member function - functions exists in structs 
//                           can be overloaded too
// use member selection operator

struct Date{
    int day{};
    int month{};
    int year {};

    // function can access directly member variable
    void printMember(){
        std::cout << day << "." << month << "." << year << "\n";
    }

    //overloaded
    void printMember(std::string_view prefix){
        std::cout << prefix <<day << "." << month << "." << year << "\n";
    }
};

// function need to declare type and variable before access member variable
void printNonMember(const Date& date){
    std::cout << date.day << "." << date.month << "." << date.year << "\n";
}

int main(){

    Date today {18, 7, 2025};

    today.day = 19;                 // member variable
    
    today.printMember();            // member function
    today.printMember("Today is: ");// overloaded member function    

    printNonMember(today);          // non member function

    return 0;
}