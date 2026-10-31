#include <iostream>

// overload operator() - to make an object act like function
//                     - to make functor (function object)

class Matrix{
private:
    int matrix[2][3]{};

public:

    int& operator()(int row, int col){
        return matrix[row][col];
    }

    void operator()(){
        for(int row{0}; row < 2; ++row){
            for(int col{0}; col < 3; ++col){
                matrix[row][col] = 0;
            }
        }
    }

    void printMatrix(){
        for(int i {0}; i < 2; ++i){
            for(int j {0}; j < 3; ++j){
                std::cout << matrix[i][j] << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }


};

int main(){

    Matrix matrix{};

    matrix(0, 1) = 7;
    matrix(0 ,2) = 6;
    matrix(1, 2) = 3;

    matrix.printMatrix();

    matrix();

    matrix.printMatrix();


    return 0;
}