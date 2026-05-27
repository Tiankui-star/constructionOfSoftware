#include "exercise.h"
#include"binaryequals.h"
#include<iostream>
#include<random>
#include"addoperation.h"
#include"suboperation.h"
#include<fstream>
bool Exercise::contains(BinaryEquals*anop){
    bool find=false;
    for(int i=0;i<equations.size();i++){
        if(anop->equals(equations[i])){
            find=true;
            break;
        }
    }
    return find;
}
BinaryEquals* Exercise::generateOperation(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,1);
    int op=dist(gen);
    if(op==0){
        return new AddOperation();
    }
    else{
        return new SubOperation();
    }
}
void Exercise::generateBinaryexercise(int operationcount){

    for(int i=0;i<operationcount;i++){
        BinaryEquals* operation=generateOperation();
        while(contains(operation)){
            delete operation;
            operation=generateOperation();

        }
        //outFile<<operation->fullprint<<std::endl();
        equations.push_back(operation);
    }
    //outFile.close();
}
void Exercise::generateAddExercise(int operationcount){
    for(int i=0;i<operationcount;i++){
        BinaryEquals* operation=new AddOperation();
        while(contains(operation)){
            delete operation;
            operation=new AddOperation();
        }
        equations.push_back(operation);
    }
}
void Exercise::generateSubExercise(int operationcount){
    for(int i=0;i<operationcount;i++){
        BinaryEquals* operation=new SubOperation();
        while(contains(operation)){
            delete operation;
            operation=new SubOperation();

        }
        equations.push_back(operation);
    }
}
void Exercise::formatDisplay1(int colcums){
    std::ofstream outFile;
    outFile.open("test.csv", std::ios::out | std::ios::app);
    for(int i=1;i<=equations.size();i++){
        outFile<<'\t'<<equations[i-1]->toprint();
        if(i%colcums==0){
            outFile<<std::endl;
        }
        else
            outFile<<',';
    }
    outFile.close();
}
void Exercise::formatDisplay2(int colcums){
    for(int i=1;i<=equations.size();i++){
        equations[i-1]->asprint();
        if(i%colcums==0){
            std::cout<<std::endl;
        }
    }
}
void Exercise::formatDisplay3(int colcums){
    for(int i=1;i<=equations.size();i++){
        equations[i-1]->fullprint();
        if(i%colcums==0){
            std::cout<<std::endl;
        }
    }
}
