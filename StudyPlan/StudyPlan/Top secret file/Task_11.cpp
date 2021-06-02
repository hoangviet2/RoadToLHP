//
//  Task_11_hsg_2017_1.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 12/02/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <algorithm>
//_hsg_2017_1
int mainTemps(){
    std::ifstream Inp;
    std::ofstream Oup;
    std::string Input_address {"Input.txt"};
    std::string Output_address {"Output.txt"};
    std::vector<int> vec_num_a {};
    std::vector<int> vec_num_b {};
    int num_a {};
    int num_b {};
    int result {};
    Inp.open(Input_address);
    Inp>>num_a;
    Inp>>num_b;
    while (num_a!=0){
        int temp_num = num_a%10;
        vec_num_a.push_back(temp_num);
        num_a /= 10;
    }
    while (num_b!=0){
        int temp_num = num_b%10;
        vec_num_b.push_back(temp_num);
        num_b /= 10;
    }
    for (auto elems:vec_num_a){
        for (auto elem:vec_num_b) {
            result += elem*elems;
        }
    }
    std::cout<<result<<std::endl;
    Oup<<result<<std::endl;
    std::cout<<std::endl;
    return 0;
}
