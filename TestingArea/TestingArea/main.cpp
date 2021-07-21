//
//  main.cpp
//  TestingArea
//
//  Created by Hoang Viet on 02/06/2021.
//
#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <map>
using namespace std;
int main(){
    ifstream Inp;
    ofstream Oup;
    Inp.open("Input.INP");
    Oup.open("Output.OUT");
    if (Inp) {
        string parenthese;
        map<char, vector<int>> hashMap;
        getline(Inp, parenthese);
        int isvalid = 0;
        for(int i = 0;i<parenthese.length();++i){
            if(parenthese.at(i) == '(' && parenthese.at(i) != ' '){
                hashMap[parenthese.at(i)].push_back(i);
                ++isvalid;
            }else if (parenthese.at(i)== ')' && parenthese.at(i) != ' '){
                hashMap[parenthese.at(i)].push_back(i);
                --isvalid;
            }
        }
        if(isvalid == 0){
            int answer = 0;
            for(int i=0;i<hashMap[']'].size();++i){
                if(hashMap[']'].at(i) == 0){
                    ++answer;
                }else{
                    if(parenthese.at((hashMap[']'].at(i))-1) != '['){
                        ++answer;
                    }
                }
            }
            Oup<<answer<<endl;
        }else{
            Oup<<-1;
        }
    }else{
        cout<<"really bro, I need you to plug me up"<<endl;
    }
    Inp.close();
    Oup.close();
    cerr << "Time collapse : " << fixed << setprecision(3) << 1.000*clock()/CLOCKS_PER_SEC <<endl;
    return 0;
}

