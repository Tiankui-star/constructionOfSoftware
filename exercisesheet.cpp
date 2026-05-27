#include "exercisesheet.h"
#include"exercise.h"
#include<iostream>
#include"OperationBase.h"
#include<vector>
#include<binaryequals.h>
#include<random>
#include"exercise.h"

void ExerciseSheet::show(){
    //std::cout<<"50 additions"<<std::endl;
    // test.generateAddExercise(50);
    // test.formatDisplay1(5);
    //std::cout<<"50 substations"<<std::endl;
    // test.generateSubExercise(50);
    // test.formatDisplay1(5);
   // std::cout<<"50 multulations"<<std::endl;
    test.generateBinaryexercise(50);
    test.formatDisplay1(5);
}

void ExerciseSheet::generateAddBase(){
    base.resize(oplimit+1,vector<BinaryEquals*>(oplimit+1));
    //std::cout<<1<<std::endl;
    for(int i=1;i<=oplimit;i++){
        for(int j=1;j<=i;j++){
            base[i][j]=addBase(i,j);
        }
    }
    //std::cout<<1<<std::endl;
}


void ExerciseSheet::formatDisplay3(){
    for(int i=1;i<=oplimit;i++){
        for(int j=1;j<=i;j++){
            base[i][j]->fullprint();
        }
        std::cout<<std::endl;
    }
}

void ExerciseSheet::formatDisplay2(int colcums){
    for(int i=1;i<=equations.size();i++){
        equations[i-1]->asprint();
        if(i%colcums==0){
            std::cout<<std::endl;
        }
    }
}

void ExerciseSheet::generateSubBase(){
    base.resize(oplimit+1,vector<BinaryEquals*>(oplimit+1));
    for(int i=1;i<=oplimit;i++){
        for(int j=1;j<=i;j++){
            base[i][j]=subBase(i,j);
        }
    }
}

void ExerciseSheet::generateBinaryBase(){
    base.resize(oplimit+1,vector<BinaryEquals*>(oplimit+1));
    for(int i=1;i<=oplimit;i++){
        for(int j=1;j<=i;j++){
            base[i][j]=binaryBase(i,j);
        }
    }
}

void ExerciseSheet::generateSheet(){
    for(int i=0;i<equationsCnt;i++){
        //std::cout<<i<<std::endl;
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<>dist(1,oplimit);

        int op1=dist(gen);
        std::uniform_int_distribution<>dist1(1,op1);
        int op2=dist1(gen);
        //std::cout<<op1<<' '<<op2<<std::endl;
        //BinaryEquals* operation=base[op1][op2];
        while(contains(base[op1][op2])){
            op1=dist(gen);
            std::uniform_int_distribution<>dist2(1,op1);
            op2=dist2(gen);
            //std::cout<<op1<<' '<<op2<<std::endl;
        }
        //outFile<<operation->fullprint<<std::endl();
        equations.push_back(base[op1][op2]);
    }
}
bool ExerciseSheet::contains(BinaryEquals*anop){
    bool find=false;
    for(int i=0;i<equations.size();i++){
        if(anop->equals(equations[i])){
            find=true;
            break;
        }
    }
    return find;
}
