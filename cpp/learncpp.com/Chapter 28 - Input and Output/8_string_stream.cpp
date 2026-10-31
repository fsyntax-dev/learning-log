#include <iostream>
#include <sstream>

// stream for string from #include <sstream>
//      istringstream
//      osstringstream
//      stringstream

//      wstringstream
//      wostringstream
//      estringstream


// two ways to put data into a stringstream
//      << insertion operator
//      .str member function



int main(){

    std::stringstream varA{};

    // first way <<
    varA << "broski";

    // second what .str(string)
    varA.str("siski");

    // to print it called .str()
    std::cout << varA.str() << "\n";

    

    return 0;
}