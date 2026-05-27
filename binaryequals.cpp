#include "binaryequals.h"
#include<random>
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

void BinaryEquals::generateBinaryOperatiion(char op){
    int left,right,result;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,100);
    left=dist(gen);
    right=dist(gen);
    result=calculate(left,right);
    while(!checkCalculation(result)){
        left=dist(gen);
        right=dist(gen);
        result=calculate(left,right);
    }
    this->leftop=left;
    this->rightop=right;
    this->op=op;
    this->value=result;
}
bool BinaryEquals::equals(const BinaryEquals *anotherop){
    return this->leftop==anotherop->leftop&&this->rightop==anotherop->rightop&&
           this->op==anotherop->op&&this->value==anotherop->op;
}

std::string BinaryEquals::toprint(){
    int left=this->leftop;
    int right=this->rightop;
    char op=this->op;

    std::string equation=std::to_string(left);
    equation+=op;
    equation+=std::to_string(right);
    //std::cout << std::left << std::setw(10) << equation;
    return equation;
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



