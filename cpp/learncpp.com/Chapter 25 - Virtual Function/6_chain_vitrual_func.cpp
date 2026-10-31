#include <iostream>
#include <string_view>

class A{
public:
    virtual std::string_view getName() const {return "A";}   
};

class B : public A{
public:
    virtual std::string_view getName() const {return "B";}
};

class C : public B{
public:
    virtual std::string_view getName() const {return "C";}    
};

int main(){

    B first{};
    A& second{first};

    std::cout << second.getName() << "\n";


    return 0;
}