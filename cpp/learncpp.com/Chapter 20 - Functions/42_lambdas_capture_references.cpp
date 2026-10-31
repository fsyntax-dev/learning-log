#include <iostream>

// to change variable value via lambda is use address as capture

int main(){

    int ammo {10};

    auto shoot {
        [&ammo]() {
            --ammo;
            std::cout << "Pew! " << ammo << " shots left" << "\n";
        }
    };

    shoot();
    shoot();
    shoot();
    shoot();
    shoot();

    std::cout << ammo << "\n";


    return 0;
}