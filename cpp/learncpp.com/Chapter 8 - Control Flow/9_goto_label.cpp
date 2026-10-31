#include <iostream>
#include <string>

// label has scope  - function scope
// function scope   - label visible throughout function even before declaration

void printAnimal(bool animal){
    if(animal == true){                 // if true jump code
        goto end;                       // access label even not yet declare
    }
    else{
        std::cout << "Dog" << "\n";     // if false gonna execute this
    }                                   // and after that
    
end:                                    // label declaration
    std::cout << "Cat" << "\n";
}

int main(){

    printAnimal(true);

    return 0;
}