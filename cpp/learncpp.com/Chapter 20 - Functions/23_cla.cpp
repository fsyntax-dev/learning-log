#include <iostream>
#include <string>

// CLA - arguments passed by OS to program

// CLA - when run program from terminal, can pass arguments
//       .\file_name.exe arguments

// normally main dont have parameter, but to make CLA program can put paramter

int main(int argc, char* argv[]){

    std::cout << "Number of arguments: " << argc << "\n";

    for(int index {0}; index < argc; ++index){
        std::cout << "Arguments " << index << ": " << argv[index] << "\n";
    }

    return 0;
}