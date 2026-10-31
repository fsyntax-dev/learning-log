#include <iostream>
#include <exception>
#include <stdexcept>

// rethrow exception - catch and exception and throw again
//                   - why? logging the exception and another handler handle it

// Rethrow does NOT catch again in the same try block

int main(){

    try{
        try{
            throw std::runtime_error("problem");
        }
        catch(const std::exception& exception){
            std::cerr << "Caught " << exception.what() << " but it's not mine" <<"\n";   
            throw;  // rethrow
        }        
    }
    catch(const std::exception& exception){
        std::cerr << "Caught " << exception.what() << " again and it's mine"<< "\n";        
    }

    return 0;
}