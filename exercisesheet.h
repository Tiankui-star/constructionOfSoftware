#ifndef EXERCISESHEET_H
#define EXERCISESHEET_H
#include"exercise.h"
#include<vector>
#include<binaryequals.h>

class ExerciseSheet
{
public:
    vector<vector<BinaryEquals*>>base;
    vector<BinaryEquals*>equations;
    int oplimit=100;
    int equationsCnt=20;
    Exercise test;
    void show();
    void generateAddBase();
    void generateSubBase();
    void generateBinaryBase();
    void generateSheet();
    void formatDisplay3();
    bool contains(BinaryEquals*anop);
    void formatDisplay2(int column);
};

#endif // EXERCISESHEET_H
