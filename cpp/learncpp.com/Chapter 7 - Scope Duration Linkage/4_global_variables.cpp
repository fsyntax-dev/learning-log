#include <iostream>

// global variable - variable that exist outside function
// naming standard - use prefix g_ or g stands for global

constexpr float g_fixedNum{5.5};                            // declare global variable

int calculation(int x){
    return x * g_fixedNum;                                  // access global variable
}

int main(){

    int x{20};

    std::cout << calculation(x) << "\n";                    // access global variable
    std::cout << "Fixed Number: " << g_fixedNum << "\n";    // access global variable

    return 0;
}