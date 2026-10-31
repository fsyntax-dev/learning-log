#include <iostream>

namespace Enemy{
    enum MonsterType{
    orc,
    goblin,
    troll,
    gre,
    skeleton,
};
}

int main(){

    std::cout << Enemy::goblin << "\n";

    return 0;
}