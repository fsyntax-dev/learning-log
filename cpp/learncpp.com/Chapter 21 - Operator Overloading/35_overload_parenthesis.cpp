#include <iostream>
#include <cassert>

// parenthesis operator     - implemented as member function
//                          - to take many parameter as we want

// non object               - () just call the functions
// object                   - operator() let object behave like function

class Matrix{
private:
    int matrix[2][3]{};

public:

    void printMatrix(){
        for(int i {0}; i < 2; ++i){
            for(int j {0}; j < 3; ++ j){
                std::cout << matrix[i][j] << " ";
            }
            std::cout << "\n";
        }
    }

    int& operator()(int row, int col){
        return matrix[row][col];
    };
};


int main(){

    Matrix matrix {};

    matrix(0, 0) = 1;
    matrix(0, 1) = 2;
    matrix(0, 2) = 3;

    matrix.printMatrix();

    return 0;
}