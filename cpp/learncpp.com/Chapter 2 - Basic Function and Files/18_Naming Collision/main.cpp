#include <iostream>

//Namespace - allow to declare same name without conflict
//          - it provide region

//Analogy   - Street 666 can't exist in the same city
//          - Street 666 can exist in City A and City B (City A and B is namespace)

namespace B{                                    //declaration
    void printInformation();
}

namespace A{
    void printInformation(){
        std::cout << "From This File" << "\n";  //declaration and definition
    }
}

int main() {

    B::printInformation();                      //namespace identifier :: function
    A::printInformation();                      // :: is scope resolution operator

    return 0;

}
