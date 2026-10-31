#include <iostream>

int main(){

    // Type deduction must have something to deduce from
    auto a{};           // must has something/literal to deduce
                        // can't just initialize like that LOL


    // Type deduction drops const                        
    const int b {5};    // const literal 5
    auto b {a};         // const dropped

                        // what can i do to make it const back?
    const auto c{a};    // reapply const keyword
                        // same goes to constexpr

    


    return 0;
}