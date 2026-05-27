#include"OperationBase.h"
#include<iostream>
#include<vector>
#include<random>
#include"addoperation.h"
#include"suboperation.h"

using std::vector;

BinaryEquals*addBase(int i,int j){
    BinaryEquals* add=new AddOperation(i,j);
    return add;
}

BinaryEquals*subBase(int i,int j){
    BinaryEquals*sub=new SubOperation(i,j);
    return sub;
}

BinaryEquals*binaryBase(int i,int j){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,1);
    int chose=dist(gen);
    if(chose==0)
        return addBase(i,j);
    if(chose==1)
        return subBase(i,j);
}
