#include <iostream>
#include <vector>
#include <type_traits>

// to painful to read that line

enum class StudentName{
    personOne,
    personTwo,
    personThree,
    personFour,
    max_number,
};

// operator overloading
// overloading the unary operator +
constexpr auto operator+(StudentName a) noexcept{
    return static_cast<std::underlying_type_t<StudentName>>(a);
}

int main(){

    std::vector<int> studentWeight(+StudentName::max_number);


    studentWeight[+StudentName::personOne] = 65;

    for(const auto& element : studentWeight){
        std::cout << element << "\t";
    }

    return 0;
}