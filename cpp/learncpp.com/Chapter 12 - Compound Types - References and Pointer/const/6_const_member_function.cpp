#include <iostream>

class Num{
private:
    int m_x{};
    int m_y{};
    int m_z{};
public:
                                                // member function - getter
    int getX() const {return m_x;}              // const like a warning label
    int getY() const {return m_y;}              // can't change rvalue of member variable

    int getZ() {return m_x = 10;}               // non const - can change member variable

    Num() = default;
    Num(int x, int y) : m_x{x}, m_y{y} {
        std::cout << (x > y ? x : y) << "\n";
    }
};

int main(){

    return 0;
}