#include <iostream>
#include <vector>

template <typename T>
void printStack(const std::vector<T>& stack){
    std::cout << "\tStack: ";
    if(stack.empty()){
        std::cout << "Empty" << "\n";
    }
    else{
        for(auto& element : stack){
            std::cout << element << " ";
        }
        std::cout << "\n";
    }
}

template <typename T>
void pushStack(std::vector<T>& stack, T element){
    stack.emplace_back(element);
    std::cout << "Push: " << element;
    printStack(stack);
}

template <typename T>
void popStack(std::vector<T>& stack){
    if(stack.empty()){
        std::cout << "\tThere's nothing to be pop" << "\n";
    }
    else{
        stack.pop_back();
        std::cout << "Pop   ";
        printStack(stack);
    }
}

int main(){
    std::vector<int> stack;
    printStack(stack);

    pushStack(stack, 1);
    pushStack(stack, 2);

    popStack(stack);
    popStack(stack);
    popStack(stack);

    pushStack(stack, 3);
    pushStack(stack, 4);
    pushStack(stack, 5);

    
    popStack(stack);
    popStack(stack);

    return 0;
}