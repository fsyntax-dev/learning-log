#include <iostream>

// automatic duration - starts when variable is defined, ends when block exits
// static duration    - starts when program starts, ends when program ends
//                    - use static keyword

// static keywords - for internal linkage and static duration

void counterstatic(){
    static int count{0};
    ++count;
    std::cout << count << "\n";
}

void counter(){
    int count{0};
    ++count;
    std::cout << count << "\n";
}

int main(){

    counter();
    counter();
    counter();
    counter();
    counter();

    std::cout << "\n";

    counterstatic();
    counterstatic();
    counterstatic();
    counterstatic();
    counterstatic();

    return 0;
}