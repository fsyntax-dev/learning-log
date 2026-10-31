#include <iostream>
#include <vector>

// bcs enum class isn't implicitly convert to int - need to use static cast
// static cast int or std::size_t both work but better std::size_t

enum class StudentName{
    personOne,
    personTwo,
    personThree,
    personFour,
    max_number,
};

int main(){

    std::vector<int> studentWeight(static_cast<std::size_t>(StudentName::max_number));
    // static cast to initialize enum count

    studentWeight[static_cast<std::size_t>(StudentName::personOne)] = 65;
    // static cast to copy assigment member enum

    for(const auto& element : studentWeight){
        std::cout << element << "\t";
    }

    return 0;
}