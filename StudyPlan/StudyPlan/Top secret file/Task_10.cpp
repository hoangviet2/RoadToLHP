//
//  Task_10.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 30/01/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main_10() {
    ifstream Inp;
    ofstream Oup;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    int n,m;
    int result {0};
    int max_num {0};
    vector<int> vec_num;
    vector<int> vec_result_num;
    Inp>>n;
    Inp>>m;
    for (int i{0}; i<n; ++i){
        int p;
        Inp>>p;
        vec_num.push_back(p);
    }
    for(auto items:vec_num){
        if(items!=1&&items!=0){
            int p = items*m;
            vec_result_num.push_back(p);
        }
    }
    for (auto item:vec_num){
        max_num+=item;
    }
    if (max_num == vec_result_num.at(vec_result_num.size()-1)){
        ++result;
    }
    for(auto items:vec_num){
        for (auto item:vec_num){
            if ((item+items)/2==vec_result_num.at(0)){
                ++result;
            }
        }
    }
    cout<<result<<endl;
    Inp.close();
    Oup.close();
    return 0;
}
