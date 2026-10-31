#include <iostream>

// when a function thrw exception and can't handle it self
// it assumes another function on the stack will handle it

int multiX(int x){
    if(x == 0){
        throw "Can't handle 0 number";
    }

    return x * x;
}

int main(){

    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;

    std::cout << multiX(x) << "\n";



    return 0;
}


// function is about to throw exception
// but main doesn't have handler

// so std::terminate() will be called by itself - runtime

// throw -> stack unwinding -> handler not found -> std::terminate() in runtime