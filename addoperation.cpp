#include "addoperation.h"

AddOperation::AddOperation() {
    generateBinaryOperatiion('+');
}
bool AddOperation::checkCalculation(int result){
    return result<=BinaryEquals::upp;
}
int AddOperation::calculate(int left,int right){
    return left+right;
}
AddOperation:: AddOperation(int i,int j){
    this->value=i+j;
    this->op='+';
    this->leftop=i;
    this->rightop=j;
}
