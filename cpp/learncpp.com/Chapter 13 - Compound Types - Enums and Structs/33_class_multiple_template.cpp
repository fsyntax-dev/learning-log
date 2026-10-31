#include <iostream>

template <typename T, typename U>
struct Pair{
    T first{};
    U second{};
};

template <typename T, typename U>
void print(Pair <T, U> value){
    std::cout << value.first << "\t" << value.second << "\n";
}

int main(){

    Pair <int,double> valueA {1, 2.56};
    Pair <double,int> valueB {5.50, 3};

    print(valueA);
    print(valueB);

    return 0;
}