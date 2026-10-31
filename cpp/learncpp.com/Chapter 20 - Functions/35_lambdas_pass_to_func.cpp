#include <iostream>
#include <functional>

// ways to input lambda with function parameter

// std::function
void funcOne(const std::function<void()>& lambda){
    lambda();
}

// function template
template <typename T>
void funcTwo(const T& lambda){
    lambda();
}

// function pointer
void funcThree(void (*lambda)()){
    lambda();
}

int main(){

    auto lambda {
                    [] () {
                        std::cout << "Hello from Lambda" << "\n";
                    }
    };

    funcOne(lambda);
    funcTwo(lambda);
    funcThree(lambda);

    

    return 0;
}