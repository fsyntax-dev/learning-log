#include <iostream>

// RVO - compiler optimization that skips unnecessary copies when returning objects
//     - avoid making temporary copy of an object that return from a function
//     - instead object constructed directly

class Num{
public:
    Num(){
        std::cout << "Constructor";
    }
    Num(const Num&) {
        std::cout << "Copy Constructor" << "\n";
    }
};

Num makeNum(){
    Num temp{};
    return temp;
}

int main(){

    Num valueA{makeNum()}; // compiler apply RVO here only "Constructor" as output
                           // we initialized temp object here

    return 0;
}