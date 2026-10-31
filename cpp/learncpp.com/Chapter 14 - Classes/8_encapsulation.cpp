#include <iostream>
#include <string>
#include <string_view>

// encapsulate - hiding data
//             - make classes easier to use
//             - reduce complexity
//             - anology - private: some detail mechanical engeneering of car
//                       - public: steering wheel and pedal

int main(){

    std::string hello {"Hello World"};
    std::cout << hello.length();        // we don't know how length works
                                        // it just access its private member
                                        // private member do the stuff

    return 0;
}