#include <iostream>

//[[fallthrough]] - execute 2 or more cases in a row on purpose

void level(int x){
    switch(x){
        case 1: 
            std::cout << "Level 1" << "\n";
            break;
        case 2:
            std::cout << "Level 2" << "\n";
            break;
        case 3:
            std::cout << "Level 3" << "\n";
            break;
        case 4:
            std::cout << "Level 4" << "\n";
            [[fallthrough]];                // tells compiler: I *want* to go to next case
        case 5:
            std::cout << "Bonus: Level 5";
            break;              
        default:
            std::cout << "Unknown Level" << "\n";
            break;
    }
}

int main(){

    level(4);

    return 0;
}