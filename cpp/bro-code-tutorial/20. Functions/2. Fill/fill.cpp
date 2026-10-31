#include <iostream>
/*
Fill () 
    + Fills a range of elements with a specified value
    + Solve problem to rewrite extended value
    + fill (begin, end, value)
*/

int main() 
{
    std::string foods[100];

    fill(foods, foods + 100, "Pizza");

    for(std::string food : foods){
        std::cout << food << "\n";
    }

    return 0;
    
}

