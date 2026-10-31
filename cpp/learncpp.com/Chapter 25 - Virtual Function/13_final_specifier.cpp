#include <iostream>
#include <string_view>

// final specifier - on class it prevent inheritance
//                 - on virtual function - it prevent to be overridden

// prevent inheritance

class Parent {
public:
    void FooParent(){std::cout << "Parent" << "\n";}
};

class Child final : public Parent{
    void FooChild(){std::cout << "Child" << "\n";}
};

class StepChild : public Child{
    // it prevent inheritance from child bcs child is final
};

int main(){


    return 0;
}