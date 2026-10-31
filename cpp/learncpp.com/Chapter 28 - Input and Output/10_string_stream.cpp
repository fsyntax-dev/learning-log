#include <iostream>
#include <sstream>

// insert and extract from stream

int main(){

    std::stringstream data{};       // empty stream
    data << "12345 67.69";          // insertion text into stream

    int nVal{};                     // seperated var type
    double dVal{};

    data >> nVal >> dVal;           // extraction stream to seperated var
                                    // >> skips at white space

    std::cout << nVal << "\n";
    std::cout << dVal << "\n";
    


    return 0;
}