#include <iostream>

// after initialization it can't re-assign (as aggregate)
// since it stil an array, so need t assign individually

int main(){

    char name[] {"person"};

    //name = "newName";          // doesnt work as aggregate

    name[0] = 't';               // kinda complicated to assign one by one

    std::cout << name << "\n";

    return 0;
}