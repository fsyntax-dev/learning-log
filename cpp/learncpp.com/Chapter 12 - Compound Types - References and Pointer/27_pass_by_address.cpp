#include <iostream>
#include <string>

void printByValue(std::string val){         // create a copy of str
    std::cout << val << "\n";
}

void printByReference(std::string& ref){    // reference bound to str
    std::cout << ref << "\n";
}

void printByAddress(std::string* ptr){      // access directly to str address
    std::cout << *ptr << "\n";
}

int main(){

    std::string str{"Hello, World!"};

    printByValue(str);      // pass by value
    printByReference(str);  // pass by reference
    printByAddress(&str);   // pass by address

    std::cout << &str << "\n";
    
    std::string* ptr {&str};
    printByAddress(ptr);

    return 0;
}