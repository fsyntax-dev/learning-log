#include <iostream>

template <typename T>
class Storage{
private:
    T m_value{};

public:
    Storage(T value) : m_value{value} {}

    void print(){
        std::cout << m_value << "\n";
    }
};

template <>
void Storage<double>::print(){
    std::cout << std::scientific << m_value << "\n";
}

int main(){

    Storage varA {5};
    Storage varB {5.5};
    
    // reference
    Storage varC {&varB};

    varA.print();
    varB.print();

    // printing address here not value
    varC.print();

    return 0;
}