#include <iostream>

class TypeA{
private:
    int m_x{};

public:
    TypeA(int x) : m_x{x}{
        if(x == 0){
            throw 0;
        }
    }    
};

class TypeB : public TypeA{
public:
    TypeB(int x) : TypeA{x} {
        // if creation of TypeA failed we want to handle it here

        // the idea is to put exception handler here instead of handler in main()
    }
};

int main(){
    try{
        TypeB classB {0};
    }
    catch(int x){
        std::cerr << "Caught " << x << "\n";
    }
}