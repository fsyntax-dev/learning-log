#include <iostream>

// lambda expression - define anonymous function
//                   - can define without name
//                   - can assign with name if wanna reuse it




int main(){

    // to use without name
    // [closureCapture] (parameters_lists) {statement} (arguments)

    std::cout << [](int x, int y) { return x + y; } (5 , 5) << "\n";

    // to use with name (for reuse purpose)
    // auto function_name { [closureCapture] (parameters_lists) {statement} (arguments) };

    auto addNum { 
        [] (int x, int y) {
            return x + y;}
        };
    
    // can reuse
    std::cout << addNum(5, 6) << "\n";
    std::cout << addNum(5, 7) << "\n";

    return 0;
}