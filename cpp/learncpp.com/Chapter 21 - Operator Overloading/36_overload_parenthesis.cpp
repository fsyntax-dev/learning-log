#include <iostream>

// overload operator() - to implement functors

class Matrix{
private:
    int matrix[2][3]{};
    
public:
    int& operator()(int row, int col){          // with parameter
        return matrix[row][col];                
    }

    void operator()(){                          // no parameter
        for(int row{0}; row < 4; ++row){
            for(int col{0}; col < 4; ++col){
                matrix[row][col] = 0;
            }
        }               
    };
    
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

    matrix(0, 0) = 1;
    matrix(0, 1) = 2;
    matrix(0, 2) = 3;

    matrix.printMatrix();

    matrix();

    matrix.printMatrix();

    return 0;
}