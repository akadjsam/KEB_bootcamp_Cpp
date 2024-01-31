#include <iostream>
#include <fstream>
#include <cassert>
#include "test.hpp"
#include <iomanip>
using namespace std;
Matrix::Matrix(int row, int col) :rowSize(row), colSize(col)
{
    ptr = new int* [rowSize];
    for (int i = 0; i < rowSize; i++) {
        ptr[i] = new int[colSize];
    }
}
Matrix::~Matrix()
{
    for (int i = 0; i < rowSize; i++) {
        delete[] ptr[i];
    }
    delete[] ptr;
}

void Matrix::setup() {
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            ptr[i][j] = rand() % 5 + 1;
        }
    }
}
void Matrix::add(const Matrix& second, Matrix& result) const
{
    assert(second.rowSize == rowSize && second.colSize == colSize);
    assert(result.rowSize == rowSize && result.colSize == colSize);

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < second.colSize; j++) {
            result.ptr[i][j] = ptr[i][j] + second.ptr[i][j];
        }
    }
}
void Matrix::sub(const Matrix& second, Matrix& result) const {
    assert(second.rowSize == rowSize && second.colSize == colSize);
    assert(result.rowSize == rowSize && result.colSize == colSize);

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < second.colSize; j++) {
            result.ptr[i][j] = ptr[i][j] - second.ptr[i][j];
        }
    }
}

void Matrix::mul(const Matrix& second, Matrix& result) const {
    assert(colSize == second.rowSize);
    assert(rowSize == result.rowSize);
    assert(second.colSize == result.colSize);

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < second.colSize; j++) {
            result.ptr[i][j] = 0;
            for (int k = 0; k < colSize; k++) {
                result.ptr[i][j] += ptr[i][k] * second.ptr[k][j];
            }
        }
    }
}
void Matrix::print() const {
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cout << setw(5) << ptr[i][j];
        }
        cout << endl;
    }
}