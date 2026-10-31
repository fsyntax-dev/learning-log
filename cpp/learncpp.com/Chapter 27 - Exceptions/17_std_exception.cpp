#include <iostream>
#include <exception>
#include <string>
#include <string_view>


// inherited from std::exception and override .what() member function
class ArrayException : public std::exception{
private:
    std::string m_error{};
    
public:
    ArrayException(std::string_view error)
        : m_error{error} {}

    const char* what() const noexcept override {return m_error.c_str();}        

};

class IntArray{
private:
    int m_data[3]{};

public:
    IntArray(){}
    
    int getSize() const {return 3;}

    int& operator[](const int index){
        if(index < 0 || index >= getSize()){
            throw ArrayException("Invalid Index");
        }

        return m_data[index];
    }
};

int main(){

    IntArray num{};

    try{
        std::cout << num[10] <<  "\n";
    }
    catch(const ArrayException& exception){
        std::cerr << "Error: " << exception.what() << "\n";
    }

    catch(const std::exception& exception){
        std::cerr << "std::exception: " << exception.what() << "\n";
    }


    return 0;
}