#include <iostream>
#include <vector>

int main(){

    std::vector<int> primeNum{2, 3, 5, 6, 7};       // deduce explicitly
    
    std::vector vowels {'a', 'e', 'i', 'o', 'u'};   // CTAD deduce implicitly

    return 0;
}