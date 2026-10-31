#include <iostream>

// when lambda called operator() invoked and treat capture as const by default

int main(){

    int ammo{10};

    auto shoot {
        [ammo] () {     // capture "cloned" variable
            --ammo;     // treat variable as constant
        }               // which result can't be modified
    };

    

    return 0;
}