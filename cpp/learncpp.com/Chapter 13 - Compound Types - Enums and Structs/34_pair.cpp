#include <iostream>

template <typename T, typename U>
void print(std::pair<T, U> value){
    std::cout << value.first << "\t" << value.second << "\n";
}

int main(){

    std::pair <int,double> valueA {1, 2.5};

    print(valueA);

    return 0;
}