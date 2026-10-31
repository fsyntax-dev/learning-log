#include <iostream>
#include <vector>

// enum count - special enum at then end of the list
//            - act as the size of the list
//            - just a technique to use it to initialize size with direct list initialization for array

namespace Student{
    enum Names{
        personOne,          // 0
        personTwo,          // 1
        personThree,        // 2
        personFour,         // 3
        max_student         // 4
    };
}

int main(){

    std::vector<int> studentWeight(Student::max_student);  // direct init - to initialize size
    // std::vector<int> studentList(4) // it just the same

    studentWeight[Student::personOne] = 65;

    for(const auto& element : studentWeight){
        std::cout << element << "\t";
    }
    



    return 0;
}