#include<iostream>
#include"generate.h"
#include<vector>
#include<string>
#include<random>
using std::vector;
using std::cout;
char Op[2];
int equationNum;
vector<vector<int>>equations;
void init(){
    Op[0]='+';
    Op[1]='-';
    equationNum=50;
}
int generateNum(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,100);
    return dist(gen);
}
void generateEquations(){
    init();
    for(int i=0;i<equationNum;i++){
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<>dist(0,1);
        int op=dist(gen);
        if(op==0)
            generateAddEquation();
        else if(op==1)
            generateSubEquation();
    }
}
void generateAddEquation(){
    int num1=generateNum();
    int num2=generateNum();
    int rsu=num1+num2;
    equations.push_back({num1,0,num2,rsu});
}
void generateSubEquation(){
    int num1=generateNum();
    int num2=generateNum();
    int rsu=num1-num2;
    equations.push_back({num1,1,num2,rsu});
}
void generateSubEquation();
void printEquation(){
    for(auto equ:equations){
        cout<<equ[0]<<' '<<Op[equ[1]]<<' '<<equ[2]<<' '<<'='<<equ[3]<<std::endl;
    }

}
