#include <iostream>
#include <memory>

// smart pointer - deallocated memory automatically
//               - std::unique_ptr
//                                  - can't copy unique pointer
//                                  - can transfer (std::move)

//               - std::shared_ptr
//               - std::weak_ptr

template <typename T>
std::ostream& operator<<(std::ostream& out, std::unique_ptr<T>& ptr){
    out << ptr.get();
    return out;
}


template <typename T>
void printPtr(std::unique_ptr<T>& ptr){
    static int index {0};
    ++index;
    std::cout << "ptr " << index << ": " << ptr << "\n";
}

int main(){

    std::unique_ptr<int> numOne {std::make_unique<int>(25)};

    printPtr(numOne);
    


    return 0;
}