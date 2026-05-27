#ifndef EXERCISE_H
#define EXERCISE_H
#include<iostream>
#include<vector>
#include"binaryequals.h"
using std::vector;
class Exercise
{
public:
    vector<BinaryEquals*>equations;
    bool contains(BinaryEquals*anop);
    BinaryEquals* generateOperation();
public:
    void generateBinaryexercise(int operationcount);

    void generateAddExercise(int operationcount);
    void generateSubExercise(int operationcount);
    void formatDisplay1(int colcums);
    void formatDisplay2(int colcums);
    void formatDisplay3(int colcums);
};

#endif // EXERCISE_H
