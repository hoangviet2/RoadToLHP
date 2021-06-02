//
//  Task_3.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 22/01/2021.
//
#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
size_t getindex(vector<double>, double);
void switching(double,double);
int main_task_3(){
    int n;
    int number {0};
    size_t index {0};
    vector<int> vec_top;
    vector<int> vec_bot;
    vector<double> vec_divide;
    ifstream Inp;
    ofstream Oup;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    Inp>>n;
    for (int i{0}; i<n; ++i) {
        Inp>>number;
        vec_top.push_back(number);
    }
    
    for (int i{0}; i<n; ++i) {
        Inp>>number;
        vec_bot.push_back(number);
    }
    
    // vec_divide
    for (size_t i {0}; i<n; ++i){
        double temp_result {0.0};
        temp_result = double(vec_top.at(i))/double(vec_bot.at(i));
        vec_divide.push_back(temp_result);
    }
    vector<int> vec_result_top {vec_top};
    vector<int> vec_result_bot {vec_bot};
    //main fuction
    for (size_t i {0}; i<n-1; ++i) {
        for (size_t j {i+1}; j<n; ++j){
            if (vec_divide.at(i)>=vec_divide.at(j)) {
                double temp {vec_divide.at(i)};
                vec_divide.at(i) = vec_divide.at(j);
                vec_divide.at(j) = temp;
                //switching(vec_divide.at(i), vec_divide.at(j));
            }
        }
    }
    for (size_t i {0}; i<n; ++i){
        double temp_result {double(vec_top.at(i)/double(vec_bot.at(i)))};
        for (auto items:vec_divide){
            if (items == temp_result){
                index = getindex(vec_divide, temp_result);
            }
        }
        vec_result_top.at(index) = vec_top.at(i);
        vec_result_bot.at(index) = vec_bot.at(i);
        vec_top.at(i) = 0.0;
        vec_bot.at(i) = 0.0;
    }
    for (auto items:vec_result_top) {
        Oup<<items<<" ";
    }
    Oup<<endl;
    for (auto items:vec_result_bot) {
        Oup<<items<<" ";
    }
    Inp.close();
    Oup.close();
    return 0;
}
size_t getindex(vector<double> v, double K){
    size_t result {0};
    auto it = find(v.begin(), v.end(), K);
 
    // If element was found
    if (it != v.end())
    {
        // calculating the index
        // of K
        size_t index = it - v.begin();
        result = index;
    }
    else {
        // If the element is not
        // present in the vector
        cout << "-1" << endl;
    }
    return result;
}
