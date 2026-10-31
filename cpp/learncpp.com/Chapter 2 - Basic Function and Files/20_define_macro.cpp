#include <iostream>

// object-like macros
#define PLAYER_NAME "Alex"
#define MAX_HEALTH 100
#define DAMAGE 1


int main(){

    int playerHealth {MAX_HEALTH};
    int damage{DAMAGE};
    
    int newHealth   {playerHealth - damage};


    std::cout << PLAYER_NAME <<" Health: " << newHealth << "/" << MAX_HEALTH << "\n";

    return 0;
}