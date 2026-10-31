#include <iostream>
#include <string>
#include <string_view>

// One of problem using basic data type as exception
//      it become vague - unclear what it means
//      if you throw int -1 what does it means? nothing its unclear

// to sovle the unclear meaning of exception is we use exception class

// exception class - just a normal class that define to throw exception

class ArrayException{
private:
    std::string m_error{};
public:
    ArrayException(std::string_view error) : m_error{error} {}

    friend std::ostream& operator<<(std::ostream& out, const ArrayException& exception){
        out << exception.m_error;
        return out; 
    }
};

class IntArray{
private:    
    int m_data[3]{};
public:
    IntArray() {}

    int getLength() const {return 3;}

    int& operator[] (const int index){
        if(index < 0 || index >= getLength()){
            throw ArrayException{"Invalid Index"};
        }
        return m_data[index];
    }

};

int main(){
    IntArray array;

    try{
        std::cout << array[5] << "\n";
    }

    // catch by reference - to avoid slicing/prevent copy
    catch(const ArrayException& exception){
        std::cerr << "Error: " << exception << "\n";
    }

    return 0;
}