#include <iostream>

// >  - greater than
// <  - lesser than
// >= - greater than or equal to
// <= - lesser than or equal to
// == - equality
// != - inequality

int enterInteger(){
    int x{};
    std::cout << "Enter integer: ";
    std::cin >> x;
    return x;
}

void checkRelation(int x, int y){
    if(x > y){
        std::cout << x << " is greater than " << y << "\n";        
    }
    else{
        std::cout << x << " is lesser than " << y << "\n";
    }
}


int main(){

    int x {enterInteger()};
    int y {enterInteger()};

    checkRelation(x, y);

    return 0;
}