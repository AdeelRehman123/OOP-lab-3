#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    vector<vector<int>> elements;

public:
    Matrix(int r, int c) : rows(r), cols(c), elements(r, vector<int>(c, 0)) {}

    
    int getRows(){ return rows; }

    
    int getCols(){ return cols; }

    void setElement(int i, int j, int value) {
        if (i >= 0 && i < rows && j >= 0 && j < cols) {
            elements[i][j] = value;
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    void display() const {
        for (const auto& row : elements) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Matrices cannot be added" << endl;
            return Matrix(0, 0);
        }
        
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.elements[i][j] = elements[i][j] + other.elements[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) {
        if (cols != other.rows) {
            cout << "Matrices cannot be multiplied" << endl;
            return Matrix(0, 0);
        }
        
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.elements[i][j] += elements[i][k] * other.elements[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix mat1(2, 2);
    Matrix mat2(2, 2);
    
    mat1.setElement(0, 0, 1);
    mat1.setElement(0, 1, 2);
    mat1.setElement(1, 0, 3);
    mat1.setElement(1, 1, 4);
    
    mat2.setElement(0, 0, 5);
    mat2.setElement(0, 1, 6);
    mat2.setElement(1, 0, 7);
    mat2.setElement(1, 1, 8);
    
    cout << "Matrix 1:" << endl;
    mat1.display();
    cout << "Matrix 2:" << endl;
    mat2.display();
    
    Matrix sum = mat1 + mat2;
    cout << "Sum of Matrices:" << endl;
    sum.display();
    
    Matrix product = mat1 * mat2;
    cout << "Product of Matrices:" << endl;
    product.display();
    
    return 0;
}
