#include <iostream>

// stack unwinding - pop the stack until handler is found
//      function that can't handle exception - removed from the call stack
//      continue to remove until it found catch statement

void typeC(){

    std::cout << "Start C" << "\n";

    throw 1;
}

void typeB(){

    std::cout << "Start B" << "\n";
    typeC();
}

void typeA(){
    
    std::cout << "Start A" << "\n";
    try{
        typeB();
    }
    catch(int x){
        std::cerr << "A catch error: " << x << "\n";
    }

}

int main(){

    std::cout << "Start Main" << "\n";

    typeA();


    return 0;
} 

/*

| type C |
| type B |
| type A |
|  main  |

then stack popped type C and type B and continue back 
with the stack have type A

|        |
|        |
| type A | catch exception here - program continues as usual
|  main  |


*/