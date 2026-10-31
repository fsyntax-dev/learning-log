#include <iostream>

// operator= - used to copy value from object 
// overload as member function

// copy assignment  - copy one object to another
// copy constructor - intialize new object

class Num{
private:
    int m_x{};
    int m_y{};

public:
    Num() = default;
    Num(int x, int y) : m_x{x}, m_y{y} {}
    
    Num(Num& x) : m_x{x.m_x}, m_y{x.m_y} {
        std::cout << "Copy" << "\n";
    }

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x << " " << number.m_y;
        return out;
    }

    Num& operator=(const Num& number);
};

Num& Num::operator=(const Num& number){
    m_x = number.m_x;
    m_y = number.m_y;

    return *this;
}

int main(){

    Num x {5, 10};

    Num y;
    y = x;

    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
    Num z = y;


    return 0;
}