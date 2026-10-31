#include <iostream>

template <typename T>
void print(T x){
    std::cout << x << "\n";
}

int main(){

    print("Hello World");
    print(5);
    print(5.5);
    print('a');
    
    std::cout << std::boolalpha;
    print(true);

    return 0;
}