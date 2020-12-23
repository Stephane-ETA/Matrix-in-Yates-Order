#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
private:
    int **matrix;
    int numberOfFactor;
    int numberOfExperiment;
    int numberOfColumn;

public:
    Matrix(int numberOfFactor);
    int** getMatrix();
    int getNumberOfFactor();
    int printMatrix();
    ~Matrix();
};


#endif