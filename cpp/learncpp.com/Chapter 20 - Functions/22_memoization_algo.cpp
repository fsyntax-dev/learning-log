#include <iostream>
#include <vector>

// memoization - instead of recalculate from scratch back, use the previous result

// F(n)=F(n−1)+F(n−2)

int fib(std::size_t count){
    static std::vector results {0, 1};                          // initialize vector

    if(count < std::size(results)){                             // return element if conditional meets
        return results[count];
    }
    else{
        results.push_back(fib(count - 1) + fib(count - 2));     // push element with fib formula
        return results[count];
    }

}


int main(){

    for(int count {0}; count <= 20; ++count){
        std::cout << fib(static_cast<std::size_t>(count)) << " ";
    }

    std::cout << fib(20) << "\n";


    return 0;
}