#include <iostream>

template <typename T>
struct Pair{
    T first{};
    T second{};
};

template <typename T>
std::ostream& operator <<(std::ostream& out, const Pair<T>& value){
    out << value.first << "\t" << value.second;
    return out;
}



int main(){
    Pair<int> valueA {5,6};
    Pair<int> valueB {10,12};

    std::cout << valueA << "\n";
    std::cout << valueB << "\n";

}