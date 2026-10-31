#include <iostream>
#include <vector>

// array can be passed like other object
// if we pass by value - create copy and its expensive
// so pass by const reference

template <typename T>                                               // use template not CTAD
void passByReferenc(const std::vector<T> & array){                  // only strict to vector only
    for(int i = 0; i < array.size(); ++i){
        std::cout << "Index " << i << ": " << array[i] << "\t";
    }
    std::cout << "\n";
}

int main(){

    std::vector<int> arrayOne {1, 2, 3, 4 ,5};
    std::vector<char> arrayTwo {'h', 'e', 'l', 'l', 'o'};
    std::vector<double> arrayThree {1.1, 1.2 ,1.3 ,1.4 ,1.5};

    passByReferenc(arrayOne);
    passByReferenc(arrayTwo);
    passByReferenc(arrayThree);


    return 0;
}