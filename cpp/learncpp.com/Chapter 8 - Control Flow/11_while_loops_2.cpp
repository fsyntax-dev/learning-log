#include <iostream>

int main(){

    while(true){
        std::cout << "Loop Again (Y/N): ";
        char loop{};
        std::cin >> loop;

        if(loop == 'N'){
            break;
        }
    }

    return 0;
}