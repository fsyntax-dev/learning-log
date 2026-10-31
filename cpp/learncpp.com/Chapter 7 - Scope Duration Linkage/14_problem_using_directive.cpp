#include <iostream>

// problem is name conflict

namespace A{
    int x{10};
}

namespace B{
    int x{11};
}

int main(){
    using namespace A;
    using namespace B;

    std::cout << x << "\n";     // compiler can't recognised which x A or B

}
