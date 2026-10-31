#include <iostream>
#include <exception>

// all function are classified as
//      non throwing exception
//      potentially throwing exception

// noexcept specifier - to define non throwing function
// noexcept doesn't prevent a function from throwing exception - if it does throw - std::terminate() will be called
//      more like: if exception leave this function -> kill the program

void typeA() noexcept {
    try{
        throw std::runtime_error{"Error"};
    }
    catch (const std::exception& exception){
        std::cerr << exception.what() << " handled inside" << "\n";
    }

    // the exception never leave and handle inside the function scope
}

void typeB() noexcept {
    throw std::runtime_error{"Error"};

    // the exception leave function scope
}

int main(){

    typeA();
    typeB();

    // std::terminate() is excuted

    std::cout << "Show Me" << "\n";


    return 0;
}

// why we need noexcept
//      to avoid stack being unwind uncontrollably
//          -> exception thrown 
//          -> stack unwind 
//          -> no catch handler
//          -> std::terminate

// noexcept cause immediate terminate without stack unwind