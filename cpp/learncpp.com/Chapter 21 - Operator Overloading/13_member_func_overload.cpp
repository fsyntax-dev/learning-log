#include <iostream>

// overload member function - 
//                          - must be added as member function of the left operand 
//                          - left operand become this->
//                          - other operands becme function parameter

// converting from friend to member
//      defined as member instead of friend
//      left parameter is removed - now parameter becomes implicit this-> object

// overload with friend function
class NumX{
private:
    int m_x{};

public:
    NumX() = default;
    NumX(int x) : m_x{x} {}

    friend NumX operator+(const NumX x, const int y);
};

NumX operator+(const NumX x, const int y){
    return NumX{x.m_x + y};
}

// overload with member function
class NumY{
private:
    int m_y{};
public:
    NumY() = default;
    NumY(int y) : m_y{y} {}

    NumY operator+(const int z);

};

NumY NumY::operator+(int z){
    return NumY{this->m_y + z};
}

int main(){


    return 0;
}