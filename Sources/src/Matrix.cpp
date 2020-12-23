#include "Matrix.h"
#include "math.h"

Matrix::Matrix(int numberOfFactor)
{
    this->numberOfFactor=numberOfFactor;
    this->numberOfExperiment=pow(2,numberOfFactor);//full factorial => numberofExperiment= 2^numberOfFactor
    this->numberOfColumn=pow(2,numberOfFactor);//constant+factors+interactions

    
    this->matrix=new int*[numberOfExperiment];
    for(int i=0; i<numberOfExperiment;i++)
    {
    this->matrix[i]=new int[numberOfColumn];

    }

}