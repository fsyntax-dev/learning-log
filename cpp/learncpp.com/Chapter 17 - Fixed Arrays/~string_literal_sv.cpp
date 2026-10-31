#include <iostream>
#include <string>

// std::string      - own the data and heavier (dynamic memor, copyable, etc)
// std::string_view - non-owning view of string data

// suffix "sv" is just shortcut for std::string_view
// sv is used for temp object

int main(){

    std::string valueA{"Hello"};
    std::string_view valueB {valueA};                      

    using namespace std::literals::string_view_literals;    // to enable "sv" suffix

    std::cout << "Hello"sv << "\n";                         // automatically "Hello" seen as std::string_view


    return 0;
}