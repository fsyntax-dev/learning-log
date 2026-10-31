#include <iostream>
#include <string>

// container length - the number of elements that container holds
// containers are homogenous means elements of container are required to have same type

int main(){

    std::string name {"Alex Smith"};

    std::cout << name << " has " << name.length() << " elements" << "\n";
    

    return 0;
}