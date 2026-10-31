#include <iostream>

// overload with Ref/Pointer to Base object

class Base{
public:
    friend std::ostream& operator<<(std::ostream& out, const Base& b){
        out << "Base";
        return out;
    }
};

class Derived : public Base{
public:
    friend std::ostream& operator<<(std::ostream& out, const Derived& b){
        out << "Derived";
        return out;
    }
};

int main(){

    Derived child{};
    Base& parent{child};
    // here is the problem

    std::cout << parent << "\n";


    return 0;
}