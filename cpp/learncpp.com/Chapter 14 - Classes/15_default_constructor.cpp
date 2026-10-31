#include <iostream>

// default constructor - constructor that accept no arguments
//                     - constructor with no paramters

class Num{
private: 
    int m_x{};
    int m_y{};

public:
    Num(){                                      // default constructor
        std::cout << m_x << " " << m_y << "\n";
    }    
};

int main(){

    Num numOne;     // default initialization
    Num numTwo{};   // value initialization

    return 0;
}