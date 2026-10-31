#include <iostream>

// this is revision
// unscoped enum    - enum          - member can access directly
//                                  - implicitly convert to int

// scoped enum      - enum class    - member access via scoped
//                                  - not implicitly convert to int - use static cast

enum Color{
    Red,
    Green,
    Blue
};

enum class Fruit{
    Apple,
    Banana,
    Orange
};