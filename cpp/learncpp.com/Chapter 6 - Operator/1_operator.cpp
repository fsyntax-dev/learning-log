#include <iostream>
// 2 + 3 = 5 
// 2 and 3  is operands
// +        is operator



int main(){
                            //operator precedence           - R to L
    int sumA{ 4 + 2 * 3 };  // it will group as 4 + (2 * 3)

                            //operator associativity        - L to R
    int sumB{ 7 - 4 - 1 };  // it will group as (7 - 4) - 1
          

    std::cout << sumA << "\n";
    std::cout << sumB << "\n";

    return 0;
}