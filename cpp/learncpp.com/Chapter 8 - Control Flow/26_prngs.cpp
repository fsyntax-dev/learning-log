#include <iostream>

unsigned int LCG16(){

    static unsigned int state{};

    state = 8253729 * state + 2396403;
    return state % 32768;

}

int main(){

    for(int count{1}; count <= 25; ++count){

        std::cout << LCG16() << "\t";
        if(count % 10 == 0){
            std::cout << "\n";
        }
    }

    return 0;
}