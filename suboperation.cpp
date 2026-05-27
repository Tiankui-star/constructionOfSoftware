#include "suboperation.h"

SubOperation::SubOperation() {
    generateBinaryOperatiion('-');
}
bool SubOperation::checkCalculation(int result){
    return result>=BinaryEquals::low;
}
int SubOperation::calculate(int left,int right){
    return left-right;
}
SubOperation::SubOperation(int i,int j) {
    this->leftop=i;
    this->rightop=j;
    this->op='-';
    this->value=i-j;
}
