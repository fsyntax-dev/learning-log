#include <iostream>
// designated initializers - help to explicitly insert value to targeted member
struct ThreeValue{
    int x{};
    int y{};
    int z{};
};

std::ostream& operator <<(std::ostream& out, ThreeValue& value)
{
    out << "X: "    << value.x
        << ", Y: "  << value.y
        << ", Z: "  << value.z;

    return out;
}

int main(){

    ThreeValue valueA{.x{1}, .z{3}};
    ThreeValue valueB{.x{3}, .y{2}};

    std::cout << valueA << "\n";
    std::cout << valueB << "\n";

    return 0;
}