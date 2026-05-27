#include<iostream>
#include"ExerciseFileTester.h"
#include<fstream>
#include<vector>

std::vector<std::string> ExerciseFileSter::readCSVAddtionExercise(std::string csvFile){
    std::vector<std::string> data;
    std::ifstream file(csvFile);

    std::string line;
    while (std::getline(file, line)) {
        std::string cell;

        for (char ch : line) {
            if (ch == '\t') {
                continue;
            }
            else if (ch == ',') {
                data.push_back(cell);
                cell.clear();
            }
            else {
                cell += ch;
            }
        }

        if (!cell.empty() || !data.empty()) {
            data.push_back(cell);
        }
    }

    file.close();
    return data;
}
void ExerciseFileSter::testReadCSVAddtionExercise(){
    std::vector<std::string>data=readCSVAddtionExercise("test.csv");
    for(auto d:data){
        std::cout<<d<<std::endl;
    }
}
