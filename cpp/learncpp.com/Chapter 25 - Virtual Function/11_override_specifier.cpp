#include <iostream>
#include <string_view>

// override specifier - explicitly tell compiler function in child class is meant to override a vritual fucntion from parent
//                    - why use? because the mismatch function signature will not be called if not use explicitly override keyword

class Parent{
public:
    virtual std::string_view getName(int x) {return "Parent";}

};

class Child : public Parent{
public:
    virtual std::string_view getName(int x) {return "Child";}
};

int main(){

    Child child{};
    Parent& parent{child};

    std::cout << parent.getName(1.1) << "\n";

    return 0;
}