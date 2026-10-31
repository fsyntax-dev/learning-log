#include <iostream>
#include <vector>

// .reserve()   - member function - change the capacity without changing the length
// .resize()    - member function - change the size can change the capacity if necessary

template <typename T>
void printStack(const std::vector<T>& stack){
    if(stack.empty()){
        std::cout << "Stack is Empty" << "\n"; 
    }
    else{
        for(auto element : stack){
            std::cout << element << " ";
        }
        std::cout << "\n";
    }
    std::cout << "Size: " << stack.size() << "\tCapacity: " << stack.capacity() << "\n";
    std::cout << "\n"; 
}


int main(){

    std::vector<int> stack;
    printStack(stack);          // empty stack

    stack.reserve(5);
    printStack(stack);          // capacity 5

    stack.push_back(1);
    stack.push_back(2);
    stack.push_back(3);
    printStack(stack);          // size 3 capacity 5

    stack.pop_back();
    printStack(stack);          // size 2 capacity 5

    stack.resize(1);
    printStack(stack);          // size 1 capacit 5

    stack.resize(6);
    printStack(stack);          // size 6 capacity 6

    return 0;
}