#include <iostream>

// overload typecast
//      must be non static member
//      must be const   - so can use with const object
//      no parameter    - but has hidden *this parameter
//      the name of conversion - used to be the return type int()


class Num{
private:
    double m_x{};

public:
    Num(double x) : m_x{x} {}
    
    operator double() const {return m_x;}
    operator int() const {return static_cast<int>(m_x);}
    operator char() const {return static_cast<char>(m_x);}


};

int main(){

    Num x {120.19};

    int int_x {x};                  // so it can be convert to other type
    double double_x{x};
    char char_x {x};

    std::cout << int_x << "\n";
    std::cout << double_x << "\n";
    std::cout << char_x << "\n";


    return 0;
}