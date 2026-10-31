#include <iostream>
#include <array>

// length of std::array must be constant expression

// lenght can be integer literal, constexpr variable and unscoped enum

int main(){

    std::array<int, 5> arrayOne{};                          // 5 integer literal constant

    constexpr int len {5};                                  // constexpr variable store literal 5
    std::array<int, len> arrayTwo{};                        // constexpr variable as array_length arguments

    enum Students{
        personOne,
        personTwo,
        personThree,
        personFour,
        max_students
    };

    std::array<int, Students::max_students> arrayThree{};   // count enum 

    int length {5};

    std::array<int, length> arrayFour{};                    // compile error - not a constant expression


    return 0;
}