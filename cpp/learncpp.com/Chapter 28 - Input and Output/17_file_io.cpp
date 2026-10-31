#include <iostream>
#include <fstream>
#include <string>

int main(){

    std::ifstream file{"sample.txt"};

    if(!file){
        std::cerr << "file can't be opened" << "\n";
    }

    std::string storedFile{};
    while(std::getline(file,storedFile)){
        std::cout << storedFile << "\n";
    }

    return 0;
}