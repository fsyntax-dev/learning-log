#include <iostream>
#include <sstream>

// clearing the stream

int main(){

    std::stringstream data{};                   // state: goodbit
    data << "001715 13 5551";

    int birth_date, state_code, queue;

    data >> birth_date >> state_code >> queue; // state: eofbit

    std::cout << birth_date << " " << state_code << " " << queue << "\n";

    data.str("");
    data.clear();   // to reset the state


    return 0;
}