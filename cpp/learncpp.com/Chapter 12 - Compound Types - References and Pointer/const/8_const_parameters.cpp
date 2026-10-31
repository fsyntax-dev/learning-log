#include <iostream>

// const parameter - prevent from modifying variable
//                 - allow passing const object

void print(const std::string& name){
    std::cout << "Name: " << name << "\n";
}

int main(){

    const std::string nameOne {"Alex Smith"};     // const object
    std::string nameTwo {"John Doe"};         // non const object

    print(nameOne);                                 // can't modify
    print(nameTwo = "Joe Rogan");                   // accidentally modify


    return 0;
}