#include <iostream>
                            // template decaration 
template <int N>            // <int N> define non+type template parameters        
void print(){
    std::cout << N <<"\n";
}

int main(){

    print<5>();

    return 0;
}