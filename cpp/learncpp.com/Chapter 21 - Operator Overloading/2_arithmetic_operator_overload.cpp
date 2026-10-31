#include <iostream>

// arithmetic operator    + - * /
//                      - binary operator (means it takes two operands)
//                      - operands operator operands (1 + 1)                 

// 3 ways to overload
//      1. member function
//      2. friend function
//      3. normal function

class Money{
private:
    int m_money{};

public:
    Money(int money) : m_money{money} {};

    int getMoney() const {return m_money;}

    // friend function declaration
    friend Money operator+(const Money& x, const Money& y);

};

// definition of friend function
Money operator+(const Money& x, const Money& y){
    return x.m_money + y.m_money;
}

// normal function
Money operator*(const Money& x, const Money& y){
    return x.getMoney() + y.getMoney();
}

int main(){

    Money x {10};
    Money y {11};

    Money addBalance {x + y};
    Money mulBalance {x * y};

    std::cout << addBalance.getMoney() << "\n";
    std::cout << mulBalance.getMoney() << "\n";


    return 0;
}