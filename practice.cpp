#include "practice.h"
#include<iostream>
#include<vector>
#include<fstream>

std::vector<int>Practice::readCSVPractice (std::string csvFile){
    std::vector<int> data;
    std::ifstream file(csvFile);

    std::string line;
    while (std::getline(file, line)) {
        std::string cell;

        for (char ch : line) {
            if (ch == '\t') {
                continue;
            }
            else if (ch == ',') {
                data.push_back(std::stoi(cell));
                cell.clear();
            }
            else {
                cell += ch;
            }
        }

        if (!cell.empty() || !data.empty()) {
            data.push_back(std::stoi(cell));
        }
    }

    file.close();
    for(auto d:data){
        std::cout<<d<<std::endl;
    }
    return data;
}
