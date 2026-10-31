#include <iostream>
#include <vector>

void passByReference(const std::vector<int>& array){
    std::cout << array[1] << "\n";
}

int main(){

    std::vector<int> arrayOne {1, 2, 3, 4, 5};

    std::vector<double> arrayTwo {1.1, 1.2, 1.3, 1.4, 1.5};

    passByReference(arrayOne);
    passByReference(arrayTwo);  // compile error - because function paramater takes int
    

    return 0;
}