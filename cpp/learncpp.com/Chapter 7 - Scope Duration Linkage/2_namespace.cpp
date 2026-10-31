#include <iostream>
#include <string>

// namespace - a container to group code to avoid name collision
//             use :: scope resolution operator to access function name
//             namespace_name :: function_name()

namespace add{
    int math(int x, int y){
        return x + y;
    } 
}

namespace subtract{
    int math(int x, int y){
        return x - y;
    }
}

namespace multiple{
    int math(int x, int y){
        return x * y;
    }
}

namespace division{
    int math(int x, int y){
        return x / y;
    }
}


int main(){

    int x{5};
    int y{10};

    std::cout << add::math(x,y);
    std::cout << subtract::math(x,y);
    std::cout << multiple::math(x,y);
    std::cout << division::math(x,y);

    return 0;
}