#include <iostream>

// enumeration - custom type that hold fixed list of named values



enum Color{                     // enumeration
    red,                        // enumerator
    green,
    blue,
};

int main(){

    Color apple {red};
    Color shirt {green};
    Color flag  {blue};

    std::cout << flag << "\n";

    return 0;
}