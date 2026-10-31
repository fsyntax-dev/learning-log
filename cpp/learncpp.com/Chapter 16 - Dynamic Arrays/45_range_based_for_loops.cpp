#include <iostream>
#include <vector>

// std::string EXPENSIVE COPIES!!!
// as usual use const reference
// do const reference on element_declaration

int main(){

    std::vector<std::string> studentName {"personOne", "personTwo", "personThree", "personFour"};

    int counter {1};
    for(auto name : studentName){                           // expensive loops
        std::cout << counter++ << ". " << name << "\n";
    }

    int counter {1};
    for(const auto& name : studentName){                    // const reference
        std::cout << counter++ << ". " << name << "\n";
    }

    return 0;
}