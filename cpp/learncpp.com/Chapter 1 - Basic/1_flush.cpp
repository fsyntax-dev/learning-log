#include <iostream>

// flushing - send the output stored in buffer to OS immediately
// buffer   - a reserve spot in RAM / a waiting room in RAM

// code -> RAM -> buffer -> flush

int main(){

    std::cout << "Hello" << std::endl;
    // std::endl cause flushing


    return 0;
}