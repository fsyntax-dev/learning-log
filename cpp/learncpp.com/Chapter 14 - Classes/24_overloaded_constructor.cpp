#include <iostream>

// constructor can be overloaded too
// same idea with function overloaded - same name different parameter

class Num{
private:
    int m_x{};
    int m_y{};
public:
    Num(){
        std::cout << "default constructor" << "\n";
    }
    Num(int x, int y) : m_x{x}, m_y{y}{
        std::cout << "overloaded constructor" << "t";
        std::cout << x << "\t" << y << "\n";
        
    }

};

int main(){

    Num();
    Num(5,10);

    return 0;
}