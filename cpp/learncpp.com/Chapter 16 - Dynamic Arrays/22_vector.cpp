#include <iostream>
#include <vector>

int main(){

    std::vector<char> arrayOne {'h', 'e', 'l', 'l', 'o'};

    std::cout << arrayOne.size() << " elements"<< "\n";
    std::cout << arrayOne.at(1) << "\n";

    return 0;
}