#include <iostream>

class Num{
private:
    int m_x{};

public:

    int& operator()(int x){
        return m_x = x;
    }

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x;
        return out;
    }
};

int main(){

    Num x {};

    std::cout << x << "\n";

    x(5);

    std::cout << x << "\n";


    return 0;
}