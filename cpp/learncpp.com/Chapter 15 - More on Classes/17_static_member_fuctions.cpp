#include <iostream>

class Num{
private:
    static inline int s_value{1};

public:
    static int getValue() {return s_value++;}     // static member function

};

int main(){

    std::cout << Num::getValue() << "\n";
    std::cout << Num::getValue() << "\n";
    std::cout << Num::getValue() << "\n";

    return 0;
}