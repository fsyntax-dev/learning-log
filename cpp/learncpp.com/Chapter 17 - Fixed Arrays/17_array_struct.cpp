#include <iostream>
#include <string>
#include <string_view>
#include <array>


struct Students{
    int id{};
    std::string_view name{};
};

constexpr std::array students{
    Students{101, "personOne"},
    Students{102, "personTwo"}
};

const Students* findStudentbyID(int id){        
    for(auto& student : students){
        if(id == student.id){
            return &student;
        }
    }
    return nullptr;
}

int main(){

    constexpr std::string_view nobody {"nobody"};

    const Students* sOne {findStudentbyID(101)};
    std::cout << (sOne ? sOne->name : nobody) << "\n";

    return 0;
}