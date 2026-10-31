#include <iostream>

int main(){

    std::string favFruit { "grapes" };

    auto fav {
        [=] () {
            std::cout << "I like " << favFruit << "\n";
        }
    };

    favFruit = "bananas";

    fav();                                                  // will print grapes
                                                            // cause lambda copied
                                                            // we didn't modified capture variable


    return 0;
}