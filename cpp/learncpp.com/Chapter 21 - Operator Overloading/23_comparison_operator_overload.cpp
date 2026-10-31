#include <iostream>

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{x} {}

    friend bool operator<(const Num& x, const Num& y); 
    friend bool operator>(const Num& x, const Num& y);

    friend bool operator<=(const Num& x, const Num& y);
    friend bool operator>=(const Num& x, const Num& y);

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number << " ";
        return out;
    }
};

bool operator<(const Num& x, const Num& y){
    return x.m_x < y.m_x;
}

bool operator>(const Num& x, const Num& y){
    return x.m_x > y.m_x;
}

bool operator<=(const Num& x, const Num& y){
    return x.m_x <= y.m_x;
}

bool operator>=(const Num& x, const Num& y){
    return x.m_x >= y.m_x;
}

int main(){

    Num x {5};
    Num y {10};

    std::cout << std::boolalpha;
    std::cout << (x < y) << "\n";
    std::cout << (x > y) << "\n";
    std::cout << (x <= y) << "\n";
    std::cout << (x >= y) << "\n";

    return 0;
}