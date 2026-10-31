#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>


// inherited from std::runtime_error
class ArrayException : public std::runtime_error{
private:
    std::string m_error{};
    
public:
    ArrayException(const std::string& error)
        : std::runtime_error{error} {}
  

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