#include <iostream>

// function try block - catch exception that thrown earlier (throw at A, catch at B)
//                    - constructor not allowed to handle exception - must rethrow
//                    - destructor can handle exception
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

    // constructor try block of initialize TypeA
    TypeB(int x) try : TypeA{x} {
   
    }
    // catch exception of TypeA
    catch(int){
        std::cerr << "Exception Caught" << "\n";
        throw; // rethrow

    }
};

int main(){

    try{
        TypeB varB {0};
    }
    catch(int){
        std::cout << "Exception Caught Again" << "\n"; 
    }

    return 0;
}