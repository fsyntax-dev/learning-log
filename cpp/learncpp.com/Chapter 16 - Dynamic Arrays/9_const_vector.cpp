#include <iostream>
#include <vector>

// vector can be made const

int main(){

    const std::vector<int> numList{1, 2, 3, 4, 5};

    numList.push_back(5);   // compile error because tryna modify const vector

    return 0;
}