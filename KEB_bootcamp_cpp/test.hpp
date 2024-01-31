#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <fstream>

class Matrix {
private:
    int rowSize;
    int colSize;
    int** ptr;
public:
    Matrix(int row, int col);
    ~Matrix();
    void setup();
    void add(const Matrix& second, Matrix& result) const;
    void sub(const Matrix& second, Matrix& result) const;
    void mul(const Matrix& second, Matrix& result) const;
    void print() const;
};

#endif