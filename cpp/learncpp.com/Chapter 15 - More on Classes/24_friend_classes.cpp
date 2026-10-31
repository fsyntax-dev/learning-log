#include <iostream>

// friend class - class that have access to other class private member
// class friendship isn't transitive - classA friend classB
//                                   - classB friend classC
//                                   - doesnt meant classA and classC are friend

class NumX{
private:
    int m_x{};

public:
    NumX(int x) : m_x{x} {};

    friend class NumY;                          // declare class NumY in NumX
                                                // NumY is friend of NumX
};

class NumY{                                     // define NumY
private:
    int m_y{};
public:
    NumY(int y) : m_y{y} {}

    void accessNumX(const NumX& x){             // member function of NumY 
        std::cout << "X: " << x.m_x << "\n";    // has access to private member of NumX
    }
};


int main(){

    NumX valueA{5};
    NumY valueB{6};

    valueB.accessNumX(valueA);

    return 0;
}