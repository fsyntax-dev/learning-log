#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> valueA(3);

    for(int i = 0; i < 3; ++i){
        std::cout << "Enter Integer " << i + 1 << ": ";
        std::cin >> valueA[i];
    }

    std::cout << "Sum of 3 integer: " << valueA[0] + valueA[1] + valueA[2] << "\n";

    return 0;
}