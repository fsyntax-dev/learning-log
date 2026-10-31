#include <iostream>
#include <array>
#include <functional>

// other wrapper  
//      std::ref()  - mutable reference wrapper
//      std::cref() - const reference wrapper


int main(){

    int x {5};

    std::reference_wrapper<int> arrayX {x};
    auto a = std::ref(x);

    std::reference_wrapper<const int> arrayY {x};
    auto b = std::cref(x);

}