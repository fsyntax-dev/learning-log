#include <iostream>
#include <string>
#include <exception>


class FileException : public std::exception{
private:
    std::string m_error{};

public:
    FileException() = default;
    FileException(std::string_view error) : m_error{error} {}
    
    const char* what() const noexcept override {return m_error.c_str();}
};

class CreateFile : public FileException{
    std::string m_fileName{};

public: 
    CreateFile(std::string_view fileName) : m_fileName{fileName} {
        std::cout << fileName <<  " has been created" << "\n";        
    }
    
    void renameFile(std::string_view newFileName){
        if(newFileName == ""){
            throw FileException("Blank Name");
        }
        std::cout << m_fileName << " has been renamed to ";
        m_fileName = newFileName;
        std::cout << m_fileName << "\n";
    }
};

int main(){

    CreateFile fileOne{"Folder 1"};

    try{
        fileOne.renameFile("");
    }
    catch(const std::exception& exception){
        std::cerr << "Error: " << exception.what() << "\n";
    }



    return 0;
}