#include <iostream>

// lambda is an object, so it can be copied
// but there's problem - it wil copied invoked lambda

int main(){
    
    int i {0};

    auto count {                        // lambda                    
        [i] () mutable {
            std::cout << ++i << "\n";
        }
    };

    count();                            // invoked - with mutable state

    auto otherCount {count};            // copied lambda with the with current state 
                                        // not an actual plain lambda

    count();
    otherCount();

    return 0;
}