#ifndef SUBOPERATION_H
#define SUBOPERATION_H
#include"binaryequals.h"
class SubOperation :public BinaryEquals
{
public:
    SubOperation();
    SubOperation(int i,int j);
    int calculate(int left,int right);
    bool checkCalculation(int result);
};

#endif // SUBOPERATION_H
