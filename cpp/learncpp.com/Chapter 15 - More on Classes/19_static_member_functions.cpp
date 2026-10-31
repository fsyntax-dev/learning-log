#include <iostream>

class Num{
private:
    static inline int s_valueA{1};
public:
    static int getvalue();              // declaration (inside class)

};

int Num::getvalue(){
    return s_valueA++;                  // definition (outside class)
}


int main(){

    for(int i = 0; i < 5; ++i){
        std::cout << Num::getvalue() << "\n";
    }

    return 0;
}