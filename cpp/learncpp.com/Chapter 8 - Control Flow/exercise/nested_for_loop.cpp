#include <iostream>

int main(){
    for(int i{1}; i <= 20; ++i){
        std::cout << i << " ";
        
        if(i / 10  == 0){
            std::cout << "\n";
        }
    }

    return 0;
}