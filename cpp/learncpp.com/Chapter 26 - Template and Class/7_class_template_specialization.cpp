#include <iostream>

template <typename T>
class Box{
public:
    void print() {
        std::cout << "Normal Class Template" << "\n";
    }
};

template<>
class Box<bool>{
public:    
    void print(){
        std::cout << "Specialized Class Template" << "\n";  
    }
};

int main(){

    Box<int> varA;
    Box<bool> varB;

    varA.print();
    varB.print();

    return 0;
}