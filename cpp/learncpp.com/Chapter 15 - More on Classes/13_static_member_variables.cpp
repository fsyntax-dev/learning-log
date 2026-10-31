#include <iostream>

struct Num{
    static int s_value;
};

int Num::s_value{1};                    // kinda forward declaration
                                        // need to do this because static must exist globally
                                        // access static member ::
int main(){

    Num valueA{};
    Num valueB{};

    valueA.s_value = 2;

    std::cout << valueA.s_value << "\t" 
              << valueB.s_value << "\n";

    return 0;
}