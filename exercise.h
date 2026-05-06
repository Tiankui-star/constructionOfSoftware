#ifndef EXERCISE_H
#define EXERCISE_H
#include<iostream>
#include<vector>
#include"binaryequals.h"
using std::vector;
class Exercise
{
private:
    static const int equation_nums=50;
    static const int column_nums=5;
    vector<BinaryEquals>equations;
    bool contains(BinaryEquals&anop,int len);
public:
    void generateBinaryexercise();
    void generateAddexercise();
    void generateSubexercise();
    void formatDisplay();
};

#endif // EXERCISE_H
