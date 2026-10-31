#include <iostream>

// member initializer list takes precedence of default member intializer 

class Num{
private: 
    int m_x{5};
    int m_y{10};    // default member

public:
    Num(int x, int y) : m_x {x}, m_y {y}{
        std::cout << "Comparing "<< x << " & " << y << "\n";
        std::cout << "Max: " << (x > y ? x : y) << "\n";
    }
};

int main(){

    Num xy{3, 12};  // member initializer takes precedence 

    return 0;
}