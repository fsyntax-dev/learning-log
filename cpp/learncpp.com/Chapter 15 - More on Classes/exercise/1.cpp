#include <iostream>

// this-> - pointer to object in class
//        - to access member

// to explain how member function can get access to private member
// behind the scene there is this-> play it role
// can mention it explicitly

class NumX{
private:
    int m_x{};
public:
    NumX(int x) : m_x{x} {}

    void printNumX() const {
        std::cout << m_x << "\n";       // compiler implicitly treat this->m_x
    }
};

class NumY{
private:
    int m_y{};
public:
    NumY(int y) : m_y{y} {}

    void printNumY() const {
        std::cout << this->m_y << "\n"; // we can do it explicitly
    }
};

int main(){


    return 0;
}