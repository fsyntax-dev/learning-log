#include <iostream>

// We have multiple versions of a function in a namespace, 
// and we want to set which one is the default

namespace Library{
    inline namespace v1{                                        // set as default
        void greet(){
            std::cout << "Hello from namepsace v1" << "\n";
        }
    }

    namespace v2{
        void greet(){
            std::cout << "Hello from namepsace v2" << "\n";
        }
    }
}
int main(){

    Library::greet();       // use v1 as default call
    Library::v2::greet();   // specific call


    return 0;
}