#include <iostream>

// object being returned by reference must exist after the function return
// that why we use static keywords

std::string& programeName(){
    static std::string name {"Finance"};
    return name;
}

int main(){

    std::cout << programeName() << "\n";;


    return 0;
}