#include <iostream>
// compound statement - called as block or block statement
//                    - block begin "{" end with "}"


void foo(){                             // block

    std::cout << "Whatever!" << "\n";

}                                       // ends of block

int main(){


    int x{};                            // block level 1   
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if(x > 0){                          // nesting block
        std::cout << "+" << "\n";       // block level 2           
    }
    else{
        std::cout << "-" << "\n";
    }

    return 0;
}