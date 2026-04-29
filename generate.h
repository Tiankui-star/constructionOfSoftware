#ifndef GENERATE_H
#define GENERATE_H
#include<random>
#include<vector>
#include<string>

using std::string;
using std::vector;

void init();
int generateNum();
void generateEquations();
void generateAddEquation();
void generateSubEquation();
void printEquation();
void printResult(int index);
void generateExercise();
bool judgeRepeat(int op,int num1,int num2);
#endif // GENERATE_H
