#ifndef BINARYEQUALS_H
#define BINARYEQUALS_H
#include<iostream>

class BinaryEquals
{
public:
    int leftop=0;
    int rightop=0;
    int value=0;
    char op;

public:
    static const int upp=100;
    static const int low=0;
    virtual int calculate(int left,int right)=0;
    virtual bool checkCalculation(int result)=0;
    bool equals(const BinaryEquals *anotherop);
    std::string toprint();
    void asprint();
    void fullprint();
protected:
    void generateBinaryOperatiion(char op);
};

#endif // BINARYEQUALS_H
