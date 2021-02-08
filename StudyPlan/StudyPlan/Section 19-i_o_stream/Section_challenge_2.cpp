//
//  Section_challenge_2.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 02/02/2021.
//
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int check_the_answer (string,string);
int main_challenge_2(){
    ifstream Input;
    ofstream Output;
    string file_in {"Input.txt"};
    string file_out {"Output.txt"};
    string str;
    Input.open(file_in);
    Output.open(file_out);
    vector<string> vec_ans;
    vector<string> vec_name;
    vector<int> vec_result;
    string head;
    double average {0.0};
    if(!Input.is_open()){
        cerr<<"can not open your file: "<<file_in<<endl;
    }
    Input>>head;
    while (!Input.eof()) {
        getline(Input,str);
        vec_ans.push_back(str);
        getline(Input,str);
        vec_name.push_back(str);
    }
    vec_ans.erase(vec_ans.begin());
    cout<<endl;
    for (auto items:vec_ans){
        vec_result.push_back(check_the_answer(head, items));
    }
    cout<<endl;
    cout<<"the head string is: "<<head<<endl;
    cout<<endl;
    for (auto item:vec_name){
        cout<<item<<" ";
    }
    int total {0};
    for (auto item:vec_result){
        total +=item;
    }
    average = double(total)/double(vec_result.size());
    cout<<endl;
    for(auto items:vec_result){
        cout<<items<<" ";
    }
    Output<<setw(15)<<left<<"Student"<<setw(5)<<right<<"Score"<<endl;
    Output<<setw(20)<<setfill('-')<<""<<endl;
    Output<<setfill(' ');
    for (size_t i {0}; i<vec_ans.size(); ++i) {
        setprecision(1);
        Output<<setw(15)<<left<<vec_name.at(i)<<setw(5)<<right<<vec_result.at(i)<<endl;
    }
    Output<<setw(20)<<setfill('-')<<""<<endl;
    Output<<setfill(' ');
    Output<<"Average score"<<setw(7)<<average;
    cout<<endl;
    Input.close();
    Output.close();
    return 0;
}
int check_the_answer (string head, string checked) {
    int result {0};
    for (size_t i {0}; i<checked.length(); ++i) {
        if (head.at(i)==checked.at(i)){
            ++result;
        }
    }
    return result;
}

