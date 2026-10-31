#include <iostream>

class Parent{
public:
    Parent() = default;
    void func() const {
        std::cout << "Parent" << "\n";
    }
};

class Child : public Parent{
public:
    Child() = default;

    // override functionality but still want to keep the original function from parent
    // just scope it and called it - without scope it will do recursion
    void func() const {
        Parent::func();
        std::cout << "Child" << "\n";
    }
};

int main(){

    Parent parent{};
    parent.func();

    Child child{};
    child.func();


    return 0;
}