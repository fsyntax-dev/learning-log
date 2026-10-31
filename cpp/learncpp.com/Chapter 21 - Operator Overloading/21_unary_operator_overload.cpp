#include <iostream>

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{x} {}
    
    friend std::ostream& operator<<(std::ostream& out, const Num& number);

    Num operator++(){           // type is Num
        m_x *= 2;
        return *this;           // need to return whole object *this
    }                           


    bool operator!() const {    // type is bool
        return m_x == 0;        // just return boolean expression
    }
};

int main(){


    return 0;
}