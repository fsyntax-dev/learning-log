#include <iostream>
#include <vector>

template <typename T>
void printStack(const std::vector<T>& stack){
    if(stack.empty()){
        std::cout << "Empty Stack" << "\n";
    }
    else{
       for(auto& element : stack){
        std::cout << element << " ";
       }
       std::cout << "\n";
       std::cout << "Top: "<< stack.back() << "\t"; 
    }
    std::cout << "Size: " << stack.size() << "\t";
    std::cout << "Capacity: " <<stack.capacity() << "\n";
    std::cout << "\n";
}

int main(){

    std::vector<int> stackOne;

    printStack(stackOne);

    stackOne.push_back(1);
    stackOne.push_back(2);
    stackOne.push_back(3);

    printStack(stackOne);   // size 3 capacity 4
    
    stackOne.push_back(4);  // capacity full - reallocation
    stackOne.push_back(5);

    printStack(stackOne);   // size 5 capacity 8

    return 0;
}

// how it decide to give extra capacity?
//      depends on the compiler itself
//      GCC and Clang double the max capacity - 4 is max , 4 x 2 = 8, 8 is the array capacity
//      VS Studio 2022 multiples the current capacity by 1.5