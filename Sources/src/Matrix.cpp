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

void Matrix::fillMatrix()
{
     int signHint;


  //fill matrix with  1
    for(int i=0;i<numberOfExperiment;i++)
 {
     for(int j=0;j<numberOfColumn;j++)
     {
        matrix[i][j]=1;
     }
 }


   //factors columns
    for( int i=0;i<numberOfExperiment;i++)
    {
        for(int j=1;j<=numberOfFactor;j++)
        {
            int nodivi=(int)pow(2,(j-1));
            int div=(int)((i+1)/nodivi);
            int rest;
            if(j==1){rest =0;}
            else {rest=((i+1) % nodivi ==0? 0:1);}
            signHint=div+rest;
            if(signHint% 2==0)
            {
             this->matrix[i][j]=1;
            }
            else
            {
               this->matrix[i][j]=-1;
            }
        }
    }

    //interactions columns
    std::vector<std::vector<int> > combi = getCombinations();
    for(int j =0 ; j<combi.size();j++)
    {
        std::vector<int> oneCombi=combi[j];
        for(int k=0;k<oneCombi.size();k++){
        for(int i =0;i<numberOfExperiment;i++)
        {
            matrix[i][numberOfFactor+j+1]*=matrix[i][oneCombi[k]];
        }
        }
    }

}

int** Matrix::getMatrix(){
    return this->matrix;
}