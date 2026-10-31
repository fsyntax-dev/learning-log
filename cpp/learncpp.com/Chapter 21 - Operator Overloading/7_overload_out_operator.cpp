#include <iostream>

// operator << is binary operator
// {std::cout} operator<< {object}

// std::cout is an object of std::ostream
// operator<<(std::ostream, object)

// chaining - using multiple << in single line
// std::cout << chainOne << chainTwo

class Num{
private:
    int m_x{};
    int m_y{};
    int m_z{};
public:
    Num(int x, int y, int z) : m_x{x}, m_y{y}, m_z{z} {}

    int getX() const {return m_x;}
    int getY() const {return m_y;}
    int getZ() const {return m_z;}

    friend std::ostream& operator<<(std::ostream& out, const Num& number);

};

// std::ostream disallowed being copied - so can't return by value
// need to be return by reference
// std::ostream& out is refer to left side (std::cout)
std::ostream& operator<<(std::ostream& out, const Num& number){
    out << number.m_x << " " 
        << number.m_y << " "
        << number.m_z << " "; 
        
    return out;
} 

int main(){

    Num numberOne {5, 10, 15};
    Num numberTwo {20, 25, 30};

    std::cout << numberOne << numberTwo << "\n";

    return 0;
}