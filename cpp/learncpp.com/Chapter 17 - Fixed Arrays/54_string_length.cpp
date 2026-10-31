#include <iostream>
#include <iterator>
#include <cstring> // std::strlen

int main(){
    
    char name[20] {"firstName"};
    char last[20] {"lastName"};

    std::cout << std::size(name) << "\n";   // return the length of array not the length of string

    // solution - strlen

    std::cout << std::strlen(name) << "\n";

    std::cout << strcat(name, last) << "\n";

    return 0;
}

// best practice - avoid c style string - use std::string