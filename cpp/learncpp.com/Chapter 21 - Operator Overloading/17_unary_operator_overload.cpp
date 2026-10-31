#include <iostream>

// unary operator 
//                  + positive 
//                  - negative 
//                  ! not

class Num{
private:
    int m_x{};

public:
    Num() = default;
    Num(int x) : m_x{x} {}

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x << "\n";
        return out;
    }

    Num operator-() const {
        return -m_x;
    }

};

int main(){
    
    Num x {10};

    std::cout << -x << "\n";

    
    return 0;
}