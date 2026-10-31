#include <iostream>

// = default - use default keyword to explicitly tell compiler that constructor is default constructor 
// just to create empty object
class Num{
private:
    int m_x{};
    int m_y{};

public:
    Num() = default;

    Num(int x, int y) : m_x {x}, m_y{y}{
        std::cout << "Do Something" << "\n";
    }

    friend std::ostream& operator<< (std::ostream& out, const Num& number);
};

std::ostream& operator<< (std::ostream& out, const Num& number){
    out << number.m_x << " " << number.m_y;
    return out;
}
     

int main(){

    Num number {};

    std::cout << number << "\n";

    return 0;
}