#include <iostream>

// relational operator - < and > compare two value

class Num{
private:
    int m_x{};
public:
    Num(int x) : m_x{x} {}

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x;
        return out;
    }

    friend bool operator<(const Num& x, const Num& y){
        return (x.m_x < y.m_x);
    }
};

template <typename T>
const T& max(const T& x, const T& y){
    return (x < y) ? y : x;
}

int main(){

    Num x {5};
    Num y {10};

    std::cout << max(x, y) << "\n";

    return 0;
}