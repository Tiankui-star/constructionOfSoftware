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
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,1);
    int op=dist(gen);
    if(op==0)
        generateAddEquation();
    else if(op==1)
        generateSubEquation();

}
void generateAddEquation(){
    int num1=generateNum();
    int num2=generateNum();
    int rsu=num1+num2;
    while(rsu>100||judgeRepeat(0,num1,num2)){
        num1=generateNum();
        num2=generateNum();
        rsu=num1+num2;
    }
    equations.push_back({num1,0,num2,rsu});
}
void generateSubEquation(){
    int num1=generateNum();
    int num2=generateNum();
    int rsu=num1-num2;
    while(rsu<0||judgeRepeat(1,num1,num2)){
        num1=generateNum();
        num2=generateNum();
        rsu=num1-num2;
    }
    equations.push_back({num1,1,num2,rsu});
}

void printEquation(){
    int cnt=0;
    for(auto equ:equations){
        cnt++;

        cout<<equ[0]<<' '<<Op[equ[1]]<<' '<<equ[2]<<' '<<'='<<' '<<equ[3];
        cout<<'\t';
        if(cnt%3==0)
            cout<<std::endl;
    }

}
void printResult(int index){
    cout<<equations[index][3];
}
void generateExercise(){
    init();
    for(int i=0;i<equationNum;i++){
        generateEquations();
    }
}
bool judgeRepeat(int op,int num1,int num2){
    for(int i=0;i<equations.size();i++){
        if(op==equations[i][1]){
            if((num1==equations[i][0]&&num2==equations[i][2])||(num1==equations[i][2]&&num2==equations[i][0])){
                    return true;
                }
        }
    }
    return false;
}
// void gen(){
//     for(int i=0;i<50;i++){
//         int num1=generateNum();
//         int num2=generateNum();
//         std::random_device rd;
//         std::mt19937 gen(rd());
//         std::uniform_int_distribution<>dist(0,1);
//         int op=dist(gen);
//         cout<<num1<<' '<<Op[op]<<' '<<num2<<' '<<'='<<std::endl;
//     }
// }
