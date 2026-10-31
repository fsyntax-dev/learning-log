#include <iostream>

// initialization os static member inside class
// it has 3 ways to do so (kinda a shortcut, no need to define in global scope)
// best practice - inline or constexpr

class Num{
public:
    static const int s_valueA{};        // static const
    static constexpr int s_valueB{};    // static constexpr
    static inline int s_valueC{};       // static inline
    
};

int main(){



    return 0;
}