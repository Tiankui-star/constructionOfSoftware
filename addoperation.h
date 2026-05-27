#ifndef ADDOPERATION_H
#define ADDOPERATION_H
#include"binaryequals.h"
class AddOperation :public BinaryEquals
{
public:
    AddOperation();
    AddOperation(int i,int j);
    int calculate(int left,int right);
    bool checkCalculation(int result);
};

#endif // ADDOPERATION_H
