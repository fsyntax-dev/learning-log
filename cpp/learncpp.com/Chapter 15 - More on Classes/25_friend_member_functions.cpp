#include <iostream>

// friend member function - function member of a class is a friend of another class

class NumX;                                         // forward declaration

class NumY{                                         
private:
    int m_y{};

public:
    NumY(int y) : m_y{y} {}

    void displayX(const NumX& x);                   // Member Function of NumY
};


class NumX{
private:
    int m_x{};

public:
    NumX(int x) : m_x{x} {}

    friend void NumY::displayX(const NumX& x);      // Declaration - Friend Member Function of NumY
};

void NumY::displayX(const NumX& x){                 // Definition - Friend Member Function of NumY
    std::cout << "x from NumX: " << x.m_x << "\n";
}


int main(){

    return 0;
}