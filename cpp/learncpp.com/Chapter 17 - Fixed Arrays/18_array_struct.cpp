#include <iostream>
#include <string>

#include <array>

struct Students{                                    // Type definition
    int id{};
    std::string_view name{};
    int age{};    
};

constexpr std::array students{                      // Array definition        
    Students{101, "personOne", 24},
    Students{102, "personTwo", 24},
};

const Students* findStudentbyID(int id){            // Function return pointer
    for(auto& student : students){
        if(id == student.id){
            return &student;
        }
    }
    return nullptr;
}

int main(){

    const Students* sOne {findStudentbyID(101)};

    std::cout << sOne->name << "\n";                // access member by pointer



    return 0;
}