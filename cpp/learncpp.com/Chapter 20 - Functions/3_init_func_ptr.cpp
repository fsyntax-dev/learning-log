#include <iostream>

// type of function must match type of function pointer

//type (* functionPtrName) (parameter_type_list) {&function_address}

int foo(){};
void print(std::string name) { std::cout << name << "\n"; }
int add(int x, int y){ return x + y; }

int main(){

    int (* funcPtrOne)() { &foo };

    // funcPtrOne = &add;                       // funcPtrOne address of non paramter function
                                                // &add has paramter function

    void (* functPtrTwo)(std::string) {&print};
    int (* funcPtrThree)(int, int) {&add};      // two parameters

    return 0;
}