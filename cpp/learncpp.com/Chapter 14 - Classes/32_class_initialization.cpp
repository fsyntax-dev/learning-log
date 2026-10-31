#include <iostream>

class Num{
private:
    int m_x{};
    int m_y{};
public:
    Num() = default;
    Num(int x) : m_x{x} {
        std::cout << "Normal Constructor" << "\n";
    }
    Num(int x, int y) : Num(x){
        m_y = y;
        std::cout << "Delegation Constructor" << "\n";
    }

    Num(const Num& number) 
        : m_x{number.m_x}{
        std::cout << "Copy Constructor" << "\n";
    }
};

int main(){

    // Default Constructor
    Num valueA;                 // default initialization
    Num valueB{};               // value intialization - preferred

    std::cout << "\n";

    // Normal Constructor
    Num valueC = 5;             // copy initialization
    Num valueD (5);             // direct list initialization
    Num valueE {5};             // direct list initialization - preferred
    Num valueF = {5};           // copy list initialization

    std::cout << "\n";
    
    // Copy Constructor
    Num valueG = valueE;        // copy initialization
    Num valueH (valueE);        // direct initialization
    Num valueI {valueE};        // direct list initialization - preferred
    Num valueJ = {valueE};      // copy list initialization

    return 0;
}