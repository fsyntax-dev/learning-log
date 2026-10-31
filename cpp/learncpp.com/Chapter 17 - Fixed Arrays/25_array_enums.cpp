#include <iostream>
#include <array>

// use static_assert to check the array has the correct number of elements

enum Students{
    Alex,           // 0
    Smith,        // 1
    John,         // 2
    Doe,        // 3
    max_students    // 4
};

int main(){

    constexpr std::array testScore {78, 94, 66};

    static_assert(std::size(testScore) == Students::max_students);  // compile error

    return 0;
}