#include <iostream>
#include <vector>

// lambda can capture multiple variable

int main(){

    int health {33};
    int armor {100};
    std::vector<std::string> enemy {};

    auto damage { 
        [&health, &armor, &enemy] () {      // capture multiple variable seperated by commas
            // code
        }
    };


    return 0;
}