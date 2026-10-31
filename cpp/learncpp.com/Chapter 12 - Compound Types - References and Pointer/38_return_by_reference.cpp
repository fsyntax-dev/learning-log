#include <iostream>

int getNumber(){            // normal function 
    int x {5};
    return x;               // return a copy of variable
}

                 
int& getReference(){        // reference function
    static int x {10};      // static keywords - let it exist until end of program
                            // if not it will be dangling reference
    return x;               // return a reference of static variable
}

int main(){

    std::cout << getNumber() << "\t";       // get a copy
    std::cout << getReference() << "\t";    // get a reference


    return 0;
}