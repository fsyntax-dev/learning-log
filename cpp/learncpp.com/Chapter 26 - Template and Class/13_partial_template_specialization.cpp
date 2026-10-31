#include <iostream>

template <typename T>
class Storage{
private:
    T m_value{};

public:
    Storage(T value) : m_value{value} {}
    void print() {
        std::cout << m_value << " Normal" << "\n";
    }    
};

template<>
void Storage<double>::print(){
    std::cout << m_value << " Specialize" << "\n";    
  
}

int main(){

    Storage varA {5};
    Storage varB {6.7};

    varA.print();
    varB.print();

    return 0;
}