#include <iostream>

// binding          - decide which function to call
// dispatching      - actual call the function 
// early binding    - decide at compile time    - fast
// late binding     - decide at run time        - flexibility

// early binding
class BaseOne{
public:
    void print() {std::cout << "BaseOne::print()" << "\n";}
};

class DerivedOne : public BaseOne{
public:
    void print() {std::cout << "DerviedOne::print()" << "\n";}    
};

// late binding
class BaseTwo{
public:
    virtual void print() {std::cout << "BaseTwo::print()" << "\n";}
};

class DerviedTwo : public BaseTwo{
public:
    void print() override {std::cout << "DerivedTwo::print()" << "\n";}    
};

int main(){

    DerivedOne varStatic;
    DerviedTwo varDynamic;

    BaseOne* ptrStatic{&varStatic};
    BaseTwo* ptrDynamic{&varDynamic};

    ptrStatic->print();     // early binding
    ptrDynamic->print();    // dynamic binding

    return 0;
}
