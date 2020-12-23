#ifndef MATRIX_H
#define MATRIX_H
#include "vector"

class Matrix
{
private:
    int **matrix;
    int numberOfFactor;
    int numberOfExperiment;
    int numberOfColumn;

public:
    Matrix(int numberOfFactor);
     std::vector<std::vector<int> > getCombinations();  //interactions combinations
    void fillMatrix();
    int** getMatrix();
    int getNumberOfFactor();
    void printMatrix();
    ~Matrix();
};


#endif