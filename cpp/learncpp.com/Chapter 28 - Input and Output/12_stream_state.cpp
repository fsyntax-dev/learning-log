#include <iostream>
#include <sstream>

// state flags - condition when using streams
//      goodbit     - everything okay
//      badbit      - corrupt
//      eofbit      - stream reach end of file
//      failbit     - e.g programs want integer user give letter

// check the state - use member function - which return a bool
//      good()
//      bad()
//      eof()
//      fail()



int main(){

    std::stringstream data{"John Capital Alex"};

    std::string nameOne, nameTwo, nameThree;

    data >> nameOne >> nameTwo >> nameThree;


    if(data.eof()){
        std::cout << "End of File" << "\n";
    }


    return 0;
}