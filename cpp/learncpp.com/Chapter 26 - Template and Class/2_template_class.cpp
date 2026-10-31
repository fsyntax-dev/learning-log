#include <iostream>

template <typename T>
class Array{
private:
    std::size_t m_length{};
    T* m_data {};
public:
    Array(std::size_t length) {
        m_length = length;
        m_data = new T[length]{};

    }
    ~Array(){
        delete[] m_data;
    }

    Array(const Array& array) = delete;
    Array& operator=(const Array&) = delete;

    T& operator[] (std::size_t index) const{
        return m_data[index];
    }

    void erase(){
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    void iterate(){
        for(std::size_t i {0}; i < m_length; i++){
            std::cout << m_data[i] << " ";
        }
        std::cout << "\n";
    }


    std::size_t size() const {
        return m_length;
    }
};

int main(){

    Array<int> array{10};

    array.iterate();


    return 0;
}