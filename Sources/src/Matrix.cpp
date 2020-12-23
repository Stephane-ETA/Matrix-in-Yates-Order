#include "Matrix.h"
#include "math.h"
#include <algorithm>
#include <String>

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

  fillMatrix();
}


std::vector<std::vector<int> >  Matrix::getCombinations()
{
  std::vector<std::vector<int> > allCombi;
    int N=numberOfFactor;


    for(int K=2;K<N+1;K++)
    {
    std::string bitmask(K,1);
    bitmask.resize(N,0);
    do {
        std::vector<int> oneCombi;
        for(int i=1;i<N+1;i++)
        {
            if(bitmask[i-1]) oneCombi.push_back(i);
        }
        allCombi.push_back(oneCombi);
    }
    while(std::prev_permutation(bitmask.begin(),bitmask.end()));

    }
    return allCombi;
}