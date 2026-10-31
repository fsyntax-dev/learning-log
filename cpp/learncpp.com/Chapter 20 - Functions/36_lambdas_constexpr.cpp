#include <iostream>

// lambdas can be constexpr
// lambdas with no closureCaputure
// lambdas with closureCapture (must be in constexpr too)

int main(){

    constexpr int x {5};
    int y {10};

    // blank closureCapture
    constexpr auto add { [] (int x, int y) {
            return x + y;
        }
    };

    // constexpr closureCapture
    constexpr auto subtract { [x] (int x, int y) {
            return x - y;
        }
    };

    // constexpr lambda with non constexpr closureCapture
    constexpr auto multiply { [y] (int x, int y) {
            return x * y;
        }  
    };


    return 0;
}