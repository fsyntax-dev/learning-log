#include <iostream>


enum Status {
    available,      // 0
    unavailable,    // 1
    error,          // 2
};


int main(){

    Status status{static_cast<Status>(1)};  // can't directly put literal
                                            // need to static_cast literal to type

    std::cout << status << "\n";

    return 0;
}