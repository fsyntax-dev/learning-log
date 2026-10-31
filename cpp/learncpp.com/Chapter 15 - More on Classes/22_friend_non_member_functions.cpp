#include <iostream>

class Num{
private:
    int m_x{};
    
public:
    Num(int x) : m_x{x} {}

    bool checkNumOne(const Num& x);                         // declaration
    friend bool checkNumTwo(const Num& x, const Num& y);    // declaration
};

bool Num::checkNumOne(const Num& x) {                       // out of class definition
    return m_x == x.m_x;                                    // class member but define outside class
}

bool checkNumTwo(const Num& x, const Num& y){               // friend definition
    return x.m_x == y.m_x;                                  // non member but have access to class member
}

int main(){

    Num valueA(5);
    Num valueB(6);

    std::cout << valueA.checkNumOne(valueB) << '\n';        // member function
    std::cout << checkNumTwo(valueA, valueB) << "\n";       // non member function
                                                            // both of this have access to private member

    return 0;
}