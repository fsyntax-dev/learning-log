#include <iostream>

// mutable keyword - to allow modification of captured variable

int main(){

    int ammo {10};

    auto shoot {
        [ammo] () mutable {
            --ammo;                                                     // modify caputerd variable
                                                                        // not actual variable
            std::cout << "Pew! " << ammo << " shots left" << "\n";
        }
    };

    shoot();
    shoot();
    shoot();
    shoot();
    shoot();

    return 0;
}