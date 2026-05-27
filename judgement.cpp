#include "judgement.h"
#include"exercise.h"
#include"practice.h"
#include<vector>

void Judgement::judge(){
    Exercise test;
    test.generateBinaryexercise(20);
    test.formatDisplay1(5);
    Practice ans;
    int cnt=0;
    std::vector<int>resu=ans.readCSVPractice("ans.csv");
    for(int i=0;i<20;i++){
        if(resu[i]==test.equations[i]->value){
            cnt++;
        }
    }
    std::cout<<"total 20"<<std::endl;
    std::cout<<"right "<<cnt<<std::endl;
    std::cout<<"false "<<20-cnt<<std::endl;
    std::cout<<"score "<<cnt*5<<std::endl;
}
