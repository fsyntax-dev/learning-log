#include <iostream>

// struct - group different types of data
// member variable are public by default

struct Employee{
    int id{};                       // member variable
    int age{};
    double salary{};
}; 

int main(){

    Employee joe{};                 // initialize

    // . - member selection operator -> variable.member_variable

    // Individually
    joe.id = 100;                   // use . to access member variabe    
    joe.age = 24;
    joe.salary = 1800.00;

    // Aggregate
    Employee mike {101, 25, 2000.00};

    std::cout << mike.salary << "\n";

    

    return 0;
}