#include <iostream>
#include <exception>
#include <string>
#include <string_view>

class File{
private:
    std::string m_name{};

public:
    File(std::string_view name) : m_name{name}{
        std::cout << m_name << " has been created" << "\n";
    }
    ~File(){
        std::cout << m_name << " has been deleted" << "\n";
    }

    void rename(std::string_view newName){
        if(newName.empty()){
            throw std::runtime_error("Blank Name");
        }
        std::cout << m_name << " has been renamed to ";
        m_name = newName;
        std::cout << m_name << "\n";
    }

};

int main(){

    File fileOne {"Restoration Folder"};

    try{
        fileOne.rename("");
    }
    catch(const std::exception& exception){
        std::cerr << "Rename Error: "<< exception.what() << "\n";        
    }


    return 0;
}