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

class C : public A{
public:
    virtual std::string_view getName() const {return "C";}
};

int main(){

    C kelas{};
    A& refkelas{kelas};

    std::cout << refkelas.getName() << "\n";

    return 0;
}