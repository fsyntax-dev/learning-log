#include <iostream>
#include <ios>
#include <sstream>

// stream control
//      clear()         - clear state
//      clear(state)    - clear and put the state
//      rdstate()       - return current state
//      setstate(state) - set a state

// the state return a bitmask

// bitmask - an integer represent the state

// goodbit          - 0
// failbit          - 1
// eofbit           - 2
// eofbit & failbit - 3
// badbit           - 4

int main(){

    std::stringstream data {};

    std::cout << data.rdstate() << "\n";

    data.setstate(std::ios::failbit);
    std::cout << data.rdstate() << "\n";

    data.clear(std::ios::badbit);
    std::cout << data.rdstate() << "\n";

    return 0;
}