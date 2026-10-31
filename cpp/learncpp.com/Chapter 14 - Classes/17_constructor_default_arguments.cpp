#include <iostream>

class Num{
private:
    int m_x{};
    int m_y{};
public:
    Num(int x = 10, int y = 5) : m_x{x}, m_y{y} {
        std::cout << (x > y ? y : x) << "\n";
    }
};

int main(){

    Num xy;
    

    return 0;
}