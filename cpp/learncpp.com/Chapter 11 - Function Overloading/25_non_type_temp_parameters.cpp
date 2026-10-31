#include <iostream>

// non type template paramters - template that hold constant value instead of type
//                             - 5 instead of int
//                             - 5 is literal int and int is type

// non type is for max performance during compile time

template<int N>                         // pass N during compile time
void repeatHello(){
    for(int i = 0; i < N; ++i){
        std::cout << "Hello" << "\n";
    }
}

void printHello(int x){                 // pass X during run time
    for(int i = 0; i < x; ++i){
        std::cout << "Hello" << "\n";
    }
}

int main(){

    repeatHello<10>();


    return 0;
}