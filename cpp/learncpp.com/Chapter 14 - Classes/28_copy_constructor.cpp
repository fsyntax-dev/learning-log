#include <iostream>

// copy constructor - a constructor takes another object same type and use it to create new object
// copy constructor paramters must be &reference

class Num{
private:
    int m_x{};
    int m_y{};

public:
    Num(int x, int y) : m_x(x), m_y{y}{                 
        std::cout << "Default Constructor" << "\n";
    }

    Num(const Num& num)  : m_x(num.m_x), m_y(num.m_y){      // Take another object Num - create new object
        std::cout << "Copy Constructor" << "\n";            // const reference - not modify original by reference
    }                                                       // bind const reference to rvalue
};

int main(){

    Num valueA{5,10};
    Num {valueA};


    return 0;
}