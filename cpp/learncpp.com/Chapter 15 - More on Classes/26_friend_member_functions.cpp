#include <iostream>

class NumY;                                         // Forward Declaration

class NumX{
private:
    int m_x{};

public:
    NumX(int x) : m_x{x} {}
                                                    // Declaration
    void displayNumY(const NumY& y);                // Member Function NumX Friend to Class NumY
};

class NumY{
private:
    int m_y{};
public:
    NumY(int y) : m_y{y} {}
                                                    // Declaration
    friend void NumX::displayNumY(const NumY& y);   // Giving Friend Access to Member Function NumX

};

void NumX::displayNumY(const NumY& y){              // Definition
    std::cout << "Access by NumX" << "\n";
    std::cout << "Y in NumY: " << y.m_y << "\n";
};

int main(){

    NumX valueA(5);
    NumY valueB(6);

    valueA.displayNumY(valueB);

    return 0;
}


