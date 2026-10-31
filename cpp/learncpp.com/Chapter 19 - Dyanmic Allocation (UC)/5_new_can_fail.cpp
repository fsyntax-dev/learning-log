#include <iostream>

// when req memory from OS and OS can't satisfy request 
// if new fails , bad_alloc exception will be thrown
// if this exception isn't handled propery - program will crash

// to handle this - std::nothrow means if new can't allocate memory it will return nullptr

int main(){

    int* ptr {new (std::nothrow) int};  // ptr will be set to nullptr if int fail to allocate memory

    std::cout << *ptr << "\n";          // most likely: undefined behaviour if attempt to dereference this ptr

    // best practice to check memory request

    if(ptr == nullptr){     // can use "!ptr" also
        std::cerr << "Couldn't Allocate Memory" << "\n";
    }


    return 0;
}