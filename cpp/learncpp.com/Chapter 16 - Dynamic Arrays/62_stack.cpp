#include <iostream>
#include <vector>

// stack - data structure - last in first out

// stacked plate - the only ways to modify it is:
//               - put new plate on the top - hiding the previous plate
//               - remove the top plate     - reveal the previous plate

// stack - container data type where insertion and removal of element occur in LIFO manner
//       - push     - insert elements                       - push_back()   or emplace_back()
//       - pop      - remove elements                       - pop_back()

//      - top/peek  - get the top element on the stack      - back()
//      - empty     - check the stack if has no elements    
//      - size      - count elements in the stack

template <typename T>
void printStack(const std::vector<T>& stack){
    if(stack.empty()){
        std::cout << "Stack is empty" << "\n";
    }
    else{
        for(T element : stack){
            std::cout << element << "\t";
        }
        std::cout << "\n";
        std::cout << "Top Element: " << stack.back() << "\n";;
    }
    std::cout << "Size       : " << stack.size() << "\n";
    std::cout << "Capacity   : " << stack.capacity() << "\n";
    
    std::cout << "\n";
}

int main(){

    std::vector<int> stack{};

    printStack(stack);

    stack.push_back(1);
    stack.push_back(2);
    stack.push_back(3);
    stack.push_back(4);
    stack.push_back(5);

    printStack(stack);

    stack.pop_back();

    printStack(stack);
    


    return 0;
}