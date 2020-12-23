#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
private:
    int **matrix;
    int numberOfFactor;

public:
    Matrix(int numberOfFactor);
    int** getMatrix();
    int getNumberOfFactor();
    int printMatrix();
    ~Matrix();
};


#endif