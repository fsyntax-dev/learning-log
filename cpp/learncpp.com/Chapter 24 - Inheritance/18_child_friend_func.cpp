#include <iostream>

// option 2 - static cast child to parent

class Parent{
public:
    Parent() = default;

    friend std::ostream& operator<<(std::ostream& out, const Parent& num){
        out << "parent" << "\n";
        return out;        
    }
};

class Child : public Parent{
public:
    Child() = default;

    friend std::ostream& operator<<(std::ostream& out, const Child& num){
        out << "child" << "\n";
        out << static_cast<const Parent&>(num);
        return out;
    }
};

int main(){

    Child child;
    
    std::cout << child << "\n";

    return 0;
}