#include "enemy_damage.h"

//header guard is to prevent receiving more than one copy
//initially it used #ifndef MACRO #define MACRO #endif, can be replace with #pragma once

int main() {

    //default
    int health {100};

    //player got hit
    health = damageMinions(health);
    health = damageMinions(health);
    health = damageMinions(health);

    //status
    showHealth(health);


}
