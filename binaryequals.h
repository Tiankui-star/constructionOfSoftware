#ifndef BINARYEQUALS_H
#define BINARYEQUALS_H

class BinaryEquals
{
private:
    int leftop=0;
    int rightop=0;
    int value=0;
    char op;
    void construct(int left,int right,char op);

public:
    static const int upp=100;
    static const int low=0;
    BinaryEquals generateAddop();
    BinaryEquals generateSubop();
    BinaryEquals generateBinaryOp();
    int getLeftop();
    int getRightop();
    char getOperator();
    int getResult();
    bool equals(const BinaryEquals &anotherop);
    void toprint();
    void asprint();
    void fullprint();
};

#endif // BINARYEQUALS_H
