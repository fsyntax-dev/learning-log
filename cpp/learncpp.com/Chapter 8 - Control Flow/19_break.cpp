#include <iostream>

int main(){

    while(true){
        int num{};
        std::cout << "Enter 0 to Exit, Other to Continue : ";
        std::cin >> num;

        if (num == 0){
            break;
        }

        std::cout << "Number entered: " << num <<"\n";
    }

    return 0;
}

