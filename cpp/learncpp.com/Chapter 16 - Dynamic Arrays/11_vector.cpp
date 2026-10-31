#include <iostream>
#include <vector>

int main(){

    std::vector<int> v1 {5};    // list init    - create 1 element value 5
    std::vector<int> v2 (5);    // direct init  - create 5 element value 0 by default

    return 0;
}