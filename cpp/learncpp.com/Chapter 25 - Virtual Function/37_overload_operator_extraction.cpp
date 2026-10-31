#include <iostream>

// print derived with overload <<

class Base{
public:
    virtual void print() {std::cout << "Base::print()" << "\n";}

    friend std::ostream& operator<<(std::ostream& out, Base& b){
        out << "Base";
        return out;
    }
};

class Derived : public Base{
public:
    void print() override {std::cout << "Derived::print()" << "\n";}

    friend std::ostream& operator<<(std::ostream& out, Derived b){
        out << "Derived";
        return out;
    }
};

int main(){

    Base obj1;
    Derived obj2;

    std::cout << obj1 << " " << obj2 << "\n";

    return 0;
}