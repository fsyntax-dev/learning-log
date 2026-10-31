#include <iostream>

enum Color{
    red,
    green,
    blue,
};

int main(){

    Color shirt {green};

    if(shirt == blue){
        std::cout << "Shirt is blue" << "\n";
    }
    else{
        std::cout << "Shirt isn't blue" << "\n";
    }

    return 0;
}