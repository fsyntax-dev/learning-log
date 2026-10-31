#include <iostream>
#include <string>
#include <string_view>

class Base{
private:
    std::string_view m_name{"Base::getName()"};
public:
    virtual void print() const {std::cout << m_name << "\n";}

    virtual ~Base() {std::cout << "Delete Base" << "\n";}
};

class Derived : public Base{
    std::string_view m_name{"Derived::getName()"};
public:
    void print() const override {std::cout << m_name << "\n";}

    ~Derived() override {std::cout << "Delete Derived" << "\n";}

    
};

int main(){

    Base* parent{new Derived()};
    Derived* convertChild {dynamic_cast<Derived*>(parent)};

    convertChild->print();

    delete parent;


    return 0;
}