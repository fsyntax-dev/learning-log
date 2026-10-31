#include <iostream>
#include "enemy_damage.h"

int damageMinions(int health){
    return health - 1;
}

int damageGhosts(int health){
    return health - 5;
}

int damageMonsters(int health){
    return health -10;
}

int damageKing(int health){
    return health - 20;
}

void showHealth(int health){
    std::cout << health << "\n";
}

