#include <iostream>

int main(){

    // Benefit of using Type Deduction

        // Easier to read
        auto valueA{5};
        auto valueAB{5.5};

        // Initialize Habit
        int valueC{};       // Garbage Value and Compiler dont't compalain
        auto valueD{};      // Compiler will show error

    return 0;
}