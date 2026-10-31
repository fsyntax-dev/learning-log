#include <iostream>
#include <vector>

template <typename T>
void passByReference(const T& array){                               // for vector array c-style
    for(int i = 0; i < array.size(); ++i){
        std::cout << "Index " << i << ": " << array[i] << "\t";
    }
    std::cout << "\n";
}

int main(){

    std::vector arrayOne {1, 2, 3, 4, 5};

    std::vector arrayTwo {1.1, 1.2, 1.3, 1.4, 1.5};

    passByReference(arrayOne);
    passByReference(arrayTwo);

    return 0;
}
