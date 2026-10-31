#include <iostream>
#include <string_view>
#include <string>


// When an object is created, it uses memory. If it's copied again, it uses more memory.
// So copying many times wastes memory.

// To avoid this, use std::string_view.



int main(){

    std::string nameWithMemory{"John"};               // String has memory

    std::string_view nameNoMemory = nameWithMemory;     // Read only no memory

    std::cout << nameNoMemory << "\n";                  


    return 0;
}