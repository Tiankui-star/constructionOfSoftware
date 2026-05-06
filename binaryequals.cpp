#include "binaryequals.h"
#include<random>
#include<iostream>
#include<string>
#include<iomanip>
void BinaryEquals::construct(int left,int right,char op){
    this->leftop=left;
    this->rightop=right;
    this->op=op;
    if(op=='-'){
        this->value=left-right;
    }
    else{
        this->value=left+right;
    }
}
BinaryEquals BinaryEquals::generateAddop(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,100);
    int num1=dist(gen);
    int num2=dist(gen);
    int rsu=num1+num2;
    while(rsu>upp){
        num1=dist(gen);
        num2=dist(gen);
        rsu=num1+num2;
    }
    BinaryEquals bop;
    bop.construct(num1,num2,'+');
    return bop;
}
BinaryEquals BinaryEquals::generateSubop(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,100);
    int num1=dist(gen);
    int num2=dist(gen);
    int rsu=num1+num2;
    while(rsu<low){
        num1=dist(gen);
        num2=dist(gen);
        rsu=num1-num2;
    }
    BinaryEquals bop;
    bop.construct(num1,num2,'-');
    return bop;
}
BinaryEquals BinaryEquals::generateBinaryOp(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,1);
    int op=dist(gen);
    if(op==0) return generateAddop();
    else return generateSubop();
}
int BinaryEquals::getLeftop(){
    return this->leftop;
}
int BinaryEquals::getRightop(){
    return this->rightop;
}
char BinaryEquals::getOperator(){
    return this->op;
}
int BinaryEquals::getResult(){
    return this->value;
}
bool BinaryEquals::equals(const BinaryEquals &anotherop){
    return this->leftop==anotherop.leftop&&this->rightop==anotherop.rightop&&
           this->op==anotherop.op&&this->value==anotherop.op;
}
void BinaryEquals::toprint(){
    int left=this->leftop;
    int right=this->rightop;
    char op=this->op;

    std::string equation=std::to_string(left);
    equation+=op;
    equation+=std::to_string(right);
    std::cout << std::left << std::setw(10) << equation;

}
void BinaryEquals::asprint(){
    int left=this->leftop;
    int right=this->rightop;
    char op=this->op;

    std::string equation=std::to_string(left);
    equation+=op;
    equation+=std::to_string(right);
    equation+='=';
    std::cout << std::left << std::setw(10) << equation;
}
void BinaryEquals::fullprint(){
    int left=this->leftop;
    int right=this->rightop;
    char op=this->op;
    int value=this->value;
    std::string equation=std::to_string(left);
    equation+=op;
    equation+=std::to_string(right);
    equation+='=';
    equation+=std::to_string(value);
    std::cout << std::left << std::setw(10) << equation;
}




