#include <iostream>


// for(init_statement; condition; end_expression)
//   statement

int main(){
    int i{1};                       // init statement

    for(i; i <=10; ++i){            // init statement; condition, end expresion
        std::cout << i << " ";      // statement
    }
        

    return 0;
}
