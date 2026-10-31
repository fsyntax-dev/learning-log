#include <iostream>

// what happen when inherited class use as exception?

class Base{
public:
    Base() {};
    ~Base() {};
};

class Derived : public Base{
public:
    Derived() {};
    ~Derived() {};
};

int main(){

    // base first
    try{
        throw Derived();
    }

        catch (const Base& base){                   
            std::cerr << "Base Caught" << "\n";
        }
        // compiler will show warning (-Wexceptions - unreachable code)
        catch (const Derived& derived){
            std::cerr << "Derived Caught" << "\n";
        }


    // derived first
    try{
        throw Derived();
    }

        catch (const Derived& derived){
            std::cerr << "Derived Caught" << "\n";
        }
        catch (const Base& base){                   
            std::cerr << "Base Caught" << "\n";
        }

    return 0;
}

/*
    The Whole Idea Is
        Class throw exception
        Class can be inherited

        which one will handler catch if we throw derived?

            Handle will catch by the order

            If handler dervided first then it caught derived
            If handler base first then it caught base since derived IS-A base

*/