#include <iostream>

// unscoped enumeration exist on global scope
// can't have same name -> naming collision

enum Color{
    red,
    green,
    blue,           // same enumerator name
};

enum Feeling{
    happy,
    tired,
    blue,           // same enumerator name
};

int main(){

    return 0;
}