#include <iostream>

// to specialize the member function
// redefine the member function outside class with the specific type

template <typename T>
class Storage{
private:
    T m_value {};

public:
    Storage(T value) : m_value{value} {}
    
    void print(){
        std::cout << m_value << " Normal Template" << "\n";
    }
};

// redefine the member class with specific type
template<>
void Storage<double>::print(){
    std::cout << m_value << " Specialize Template" << "\n";    
}


int main(){

    Storage varA {5};
    Storage varB {5.5};

    varA.print();
    varB.print();

    return 0;
}