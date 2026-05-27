#ifndef EXERCISEFILETESTER_H
#define EXERCISEFILETESTER_H
#include<iostream>
#include<vector>

class ExerciseFileSter{
public:
    void testWriteCSVAddtionExercise();
    std::vector<std::string> readCSVAddtionExercise(std::string csvFile);
    void testReadCSVAddtionExercise();
};


#endif // EXERCISEFILETESTER_H
