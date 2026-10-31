#include <iostream>
#include <fstream>
#include <string>

// read program

int main(){

    // ifstream to read file
    std::ifstream file {"newFile.txt"};
    
    if(!file){
        std::cerr << "newFile.txt couldn't be opened" << "\n";
        return 1;
    }

    std::string readString{};
    // file being extract to readString
    while(file >> readString){
        std::cout << readString << " ";
    }



    return 0;
}