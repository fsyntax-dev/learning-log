#include <iostream>
#include <string_view>

// error handling is important in writing reusabe code


// just an idea of error handling
int firstChar(std::string_view string, char ch){
    for(std::size_t index {0}; index < string.length(); ++index){
        if(string[index] == ch){
            return index;
        }
    }
    return -1;                                                      // error handling
                                                                    // if the ch can't be find return -1
}

// using return num has drawbacks
//      it can be cryptic - its return a value or return an error?
//      function can return one value - can't return function result and error code

int main(){

    std::cout << firstChar("John", 'z') << "\n";
    std::cout << firstChar("John", 'o') << "\n";

    return 0;
}