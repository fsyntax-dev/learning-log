#include <iostream>

class Num{
private:
    int m_num{};
    
public:
    Num() = default;
    Num(int num) : m_num {num} {}

    int getNum() const {return m_num;}

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_num << " ";
        return out;
    }
    
    Num operator+(const int value){     
        return Num{m_num + value};
    }

};

int main(){

    Num x {10};
    int y {15};
    Num balance {x + y};                    // object.operator+(y) - member function
                                            // operator+(x, y)     - friend function

    std::cout << balance << "\n";
    std::cout << balance.getNum() << "\n";


    return 0;
}

// when to use each type for overload

// normal function and friend function
// dealing with binary operator that don't modify left operand

// member function
// dealing with binary operator that modify left operand