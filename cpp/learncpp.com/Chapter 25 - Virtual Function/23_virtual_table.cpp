#include <iostream>

// *__vptr - a hidden ptr automatically added by compiler to any class that has virtual function member

//         - every virtual function has virtual table
//         - for compiler to lookup/find the virtual func

class BaseOne{
public:
    virtual void function() {std::cout << "BaseOne::function()" << "\n";}
};

class BaseTwo : public BaseOne{
public:
    void function() override {std::cout << "BaseTwo::function()" << "\n";}
};

// compiler will set up 2 table (BaseOne and BaseTwo)
// compiler then add *__vptr to object class

int main(){



    return 0;
}


// summary
//      compiler automatically create vtable for class has virtual function
//      class object has hidden *__vptr pointing to correct vtable