#include <iostream>
#include <fstream>
#include <string>

// each file stream has its own pointer/cursor to keep track read/write position in file

// random file access  - manipulating the file pointer using
//      seekg() - get for input     - move pointer for read
//      seekp() - put for output    - move pointer for write

// this member function take two parameter
//      1st - off
//      2nd - direction
//              beg - beginning
//              cur - current
//              end - end

int main(){

    std::ifstream data{"newFile.txt"};

    if(!data){
        std::cerr << "file can't be opened" << "\n";
        return 1;
    }

    std::string newData {};

    data.seekg(5);
    std::getline(data, newData);
    std::cout << newData << "\n";
    

    return 0;
}