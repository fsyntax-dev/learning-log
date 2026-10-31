#include <iostream>

class Num{
private:
    int m_x{};
    int m_y{};
    int m_z{};
public:
    Num() = default;
    Num(int x, int y, int z) 
        : m_x{x} , m_y{y}, m_z{z} {}

    friend std::ostream& operator<< (std::ostream& out, const Num& number);
    friend std::istream& operator>> (std::istream& in, Num& number);

};

std::ostream& operator<< (std::ostream& out, const Num& number){
    out << number.m_x << " " << number.m_y << " " << number.m_z <<  " ";

    return out;
}

std::istream& operator>> (std::istream& in, Num& number){
    in >> number.m_x >> number.m_y >> number.m_z;

    return in;
}

int main(){

    Num number {};

    std::cout << "Enter Number: ";
    std::cin >> number;

    std::cout << number << "\n";



    return 0;
}