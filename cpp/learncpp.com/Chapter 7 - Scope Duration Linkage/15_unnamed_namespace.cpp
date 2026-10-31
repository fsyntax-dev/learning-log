#include <iostream>

// unnamed namespace - namepsace that don't have name
//                   - anonymous namespace
//                   - only available in this file

namespace{
    void printTen(){
        std::cout << 10 << "\n";
    }
}

int main(){

    printTen();

    return 0;
}