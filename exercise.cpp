#include "exercise.h"
#include"binaryequals.h"
#include<iostream>
bool Exercise::contains(BinaryEquals&anop,int len){
    bool find=false;
    for(int i=0;i<len;i++){
        if(anop.equals(equations[i])){
            find=true;
            break;
        }
    }
    return find;
}
void Exercise::generateBinaryexercise(){
    BinaryEquals anop;
    BinaryEquals creator;
    for(int i=0;i<equation_nums;i++){
        anop=creator.generateBinaryOp();
        while(contains(anop,i-1)){
            anop=creator.generateBinaryOp();
        }
        equations.push_back(anop);
    }

}
void Exercise::generateAddexercise(){
    BinaryEquals anop;
    BinaryEquals creator;
    for(int i=0;i<equation_nums;i++){
        anop=creator.generateAddop();
        while(contains(anop,i-1)){
            anop=creator.generateAddop();
        }
        equations.push_back(anop);
    }
}
void Exercise::generateSubexercise(){
    BinaryEquals anop;
    BinaryEquals creator;
    for(int i=0;i<equation_nums;i++){
        anop=creator.generateSubop();
        while(contains(anop,i-1)){
            anop=creator.generateSubop();
        }
        equations.push_back(anop);
    }
}
void Exercise::formatDisplay(){
    for(int i=1;i<=equation_nums;i++){
        //if(i%5==0) std::cout<<endl;
        equations[i-1].asprint();
        if(i%5==0) std::cout<<std::endl;
    }
}

