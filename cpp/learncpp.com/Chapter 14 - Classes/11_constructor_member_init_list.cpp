#include <iostream>

// member initializer lists - assign constructor parameters to member variables

class Num{
private: 
    int m_x{};
    int m_y{};

public:
    Num(int x, int y) : m_x {x}, m_y {y}{
        std::cout << "Comparing "<< x << " & " << y << "\n";
        std::cout << "Max: " << (x > y ? x : y) << "\n";
    }
};

int main(){

    Num num{5,3};

    return 0;
}