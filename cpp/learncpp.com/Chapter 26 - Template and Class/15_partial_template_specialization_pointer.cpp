#include <iostream>

template <typename T>
class Storage{
private:
    T m_value {};

public:
    Storage(T value) : m_value{value} {}
    
    void print(){
        std::cout << m_value << "\n";
    }
};

template <>
void Storage<double>::print(){
    if(m_value){
        std::cout << std::scientific << m_value << "\n";
        std::cout << "Normal" << "\n";
    }    
}

template <>
void Storage<double*>::print(){
    if(m_value){
        std::cout << std::scientific << *m_value << "\n";
        std::cout << "Normal" << "\n";
    }    
}

int main(){

    double varA {5.5};
    double* varB {&varA};

    Storage varC {varB};

    varC.print();

    return 0;
}