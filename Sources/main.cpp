#include <iostream>
#include <algorithm>
#include <String>
#include "Matrix.h"
#include <vector>

using namespace std;

int main()
{
    int Number;
    cout<<"Yates Order Matrix for Yates Order Analysis"<<endl;
    cout<<"Enter the number of factor : ";
    cin>>Number;
    Matrix M(Number);
    M.printMatrix();
    return 0;
}
