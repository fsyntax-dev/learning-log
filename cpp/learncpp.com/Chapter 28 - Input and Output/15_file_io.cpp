#include <iostream>
#include <fstream>

// ifstream - input             - read from file
// ofstream - output            - write to file
// fstream  - input and output  - read and write for same file

int main(){

    std::ofstream newFile("newFile.txt");   // create a new file


    newFile << "First Line" << "\n";


    return 0;
}