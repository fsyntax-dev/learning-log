#include <iostream>

// inheritance - not gonna inherit friend func

// option 1 - redefine in child class

class Parent{
public:
    Parent() = default;

    friend std::ostream& operator<<(std::ostream& out, const Parent& num){
        out << "parent";
        return out;
    }        
};

class Child{
public:
    Child() = default;
 
    friend std::ostream& operator<<(std::ostream& out, const Child& num){
        out << "child";
        return out;
    }
};

int main(){

    Parent parent {};

    Child child {};

    std::cout << parent << "\n";
    std::cout << child << "\n";


    return 0;
}