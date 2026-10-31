#include <iostream>

class Fraction{
private:
    int m_x{};
    int m_y{};
public:
    Fraction(int x, int y) : m_x{x}, m_y{y != 0.0 ? y : false} {
        std::cout << x / y;
    }
};

int main(){

    Fraction xy{5,4};


    return 0;
}