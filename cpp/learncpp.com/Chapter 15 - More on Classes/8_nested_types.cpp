#include <iostream>

// class inside class is uncommn
// but it possible to do so

class Outer{
public:
    void sayHello(){
            std::cout << "Hello from Outer" << "\n";
        }
    class Inner{
    public:
        void sayHello(){
            std::cout << "Hello from Inner" << "\n";
        }
    };
};

int main(){

    Outer outer;
    outer.sayHello();

    Outer::Inner inner;     // scope resolution operator to access inner
    inner.sayHello();

    return 0;
}