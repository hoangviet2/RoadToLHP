//
//  Task_13.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 12/02/2021.
//
// đề bài:

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

bool checking_number (int);
std::vector<double> times (int);

int main_12022021_2(){
    std::ifstream Inp;
    std::ofstream Oup;
    std::string Input_string {"Input.txt"};
    std::string Output_string {"Output.txt"};
    std::vector<int> vec_index {};
    int n {};
    Inp.open(Input_string);
    Oup.open(Output_string);
    if(Inp){
        //std::cout<<"Processing"<<std::endl;
        Inp>>n;
        int num_temp {};
        for (int i{0};i<n;++i){
            Inp>>num_temp;
            vec_index.push_back(num_temp);
        }
        
        std::vector<double> vec_reult {times(10)};
        std::sort(vec_reult.begin(), vec_reult.end());
        std::set<double> set (vec_reult.begin(),vec_reult.end());
        for (auto item:set)
            Oup<<item<<std::endl;
    }
    Inp.close();
    Oup.close();
    //std::cout<<"end"<<std::endl;
    return 0;
}
bool checking_number (int number) {
    bool done_condi = false;
    if (number==3||number==5||number==7)
        return true;
    for(int i {2}; i<number; ++i){
        if (number%i == 0){
            if (i==3){
                done_condi = true;
                continue;
            }else if(i==5){
                done_condi = true;
                continue;
            }else if(i==7){
                done_condi = true;
                continue;
            }else{
                return false;
            }
        }
    }
    if (done_condi){
        return true;
    }
    return false;
}
//std::vector<double> vec,
std::vector<double> times ( int n){
    std::vector<double> vec1 {};
    for (int i{0}; i<=n; ++i){
        for (int j{0}; j<=n; ++j){
            for (int k{0}; k<=n; ++k){
                double total {pow(3, i)*pow(5, j)*pow(7, k)};
                if (checking_number(total)) {
                    vec1.push_back(total);
               }
            }
        }
    }
    return vec1;
}
  
