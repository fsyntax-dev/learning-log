#include <iostream>

// Constructor can throw exceptions 
// Constructor is failed during the creation will be aborted

class TypeA{
public:
    TypeA(){
        std::cerr << "TypeA Constructed" << "\n";
    }
    ~TypeA(){
        std::cerr << "TypeA Destructed" << "\n";
    }
};

class TypeB{
private:
    int m_x{};
    TypeA m_TypeA;  // this will be destructed for sure

public:
    TypeB(int x) : m_x{x} {
        std::cerr << "TypeB Constructed" << "\n";
        if(x == 0){
            throw 0;
        }

    }
    
    // this will never get called if it fail to construct
    ~TypeB(){
        std::cerr << "TypeB Destructed" << "\n";
    }
};

int main(){

    try{
        TypeB varB{0};
        // typeB object construction failed - considered as never created

    }
    catch(int x){
        std::cerr << "Error " << x <<"\n";
    }

    std::cout << "Continue" << "\n";

    return 0;
}

/*
    The Whole Idea Is
        Constructor can throw an exception

        If constructor throw exception - the object considered not constructed
                                       - the destructor never called

        But any member of unconstructed object are still destructed during stack unwind                                       


*/