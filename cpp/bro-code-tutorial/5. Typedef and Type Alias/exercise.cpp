#include <iostream>
#include <vector>

/*
Typdef
    + giving alias to type
*/

typedef std::string text_t;

int main() {

    std::string firstName = "First";    // standard usage of string 
    text_t lastName = "Last";           // already has its own alias

    std::cout << firstName << " " << lastName << "\n";


    return 0;
}