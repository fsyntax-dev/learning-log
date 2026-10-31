#include <iostream>
#include <vector>

// array are contiguous in memory

int main(){

    std::vector<int> contA{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < contA.size(); ++i){
        std::cout << &contA[i] << "\n";
    }

    // int is 4 byte
    // the memory gonna be like this
    // 0x13dd64e2c70
    // 0x13dd64e2c74
    // 0x13dd64e2c78

    // it has 4 step for a memory since int is 4 bytes

    return 0;
}