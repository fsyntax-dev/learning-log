#include <iostream>


class Array{
private:
    int* m_data{};
    int m_size{};

public:
    Array(int data, int size) : m_size{size} {
        
        m_data = new int[m_size];

        for(int i {0}; i < m_size; ++i){
            m_data[i] = data + i;
        }
    }

    ~Array(){
        delete[] m_data;
    }

    // member function throw exception
    int& operator[](const int index){
        if(index < 0 || index >= m_size){
            throw "Out of Bounds";
        }
        else{
            return m_data[index];
        }
    }

    void print(){
        for(int i {0}; i < m_size; ++i){
            std::cout << m_data[i] << " ";
        }
        std::cout << "\n";
    }

};

int main(){

    std::cout << "Enter Value: ";
    int value{};
    std::cin >> value;


    std::cout << "Enter Size: ";
    int size{};
    std::cin >> size;

    Array numList (value, size);

    std::cout << "Enter index: ";
    int index{};
    std::cin >> index;

    try{
        std::cout << numList[index] << "\n";
    }
    catch(const char* x){
        std::cerr << "Error: " << x << "\n";
    }

    numList.print();

    return 0;
}