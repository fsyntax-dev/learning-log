#include <iostream>

// compiler provide copy constructor which do shallow copy

class Num{
private:
    int* m_x{};

public:
    Num(int x){
        m_x = new int(x);           // allocated memory for x
    }

    void print();
    void printAddress();
    void setNum(int x);
};

void Num::print(){
    std::cout << *m_x <<"\n";
}

void Num::printAddress(){
    std::cout << m_x << "\n";
}

void Num::setNum(int x){
    *m_x = x;
}

int main(){

    Num x {5};
    Num y {x};

    x.printAddress();
    y.printAddress();

    x.print();
    y.print();

                        // issue here
    y.setNum(10);       // assign new value at the same memory?

    x.print();
    y.print();


    return 0;
}