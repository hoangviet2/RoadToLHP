//
//  Task_5.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 24/01/2021.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int getIndex(vector<int>,int);
int main_task_5_PTNK(){
    int n,x;
    int index_of_key_number = 0;
    ifstream Inp;
    ofstream Oup;
    vector<int> vec_num;
    vector<int> vec_differ_num;
    vector<int> vec_last;
    vector<int> vec_times;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    Inp>>n;
    // take the numbers
    for (int i {0}; i<n; ++i){
        Inp>>x;
        vec_num.push_back(x);
    }
    vector<int> vec_num_temp {vec_num};
    // take the number to the unique
    for (auto item:vec_num_temp){
        if(getIndex(vec_differ_num, item)==-1){
            vec_differ_num.push_back(item);
        }
    }
    // count the last num of the unique num
    for (auto item:vec_differ_num){
        int first {0};
        while(getIndex(vec_num_temp, item)!= -1){
            first = getIndex(vec_num_temp, item);
            vec_num_temp.at(getIndex(vec_num_temp, item)) = 1000;
        }
        vec_last.push_back(first);
    }
    // calculate the length between of 2 unique number by fomular: times = last-frist
    // and push it into vec_times to save the value
    vec_num_temp = vec_num;
    int index{0};
    for (auto item:vec_differ_num){
        int first {getIndex(vec_num_temp, item)};
        vec_times.push_back(vec_last.at(index)-first);
        ++index;
    }
    int largest_times_number {vec_times.at(0)};
    for (auto item:vec_times){
        if(largest_times_number<=item){
            largest_times_number = item;
        }
    }
    for (auto item:vec_times){
        if(largest_times_number==item){
            index_of_key_number = getIndex(vec_times, item);
        }
    }
    Oup<<vec_differ_num.at(index_of_key_number)<<endl;
    Oup<<largest_times_number+1<<endl;
    Inp.close();
    Oup.close();
    return 0;
}
int getIndex(vector<int> v, int K)
{
    int result {0};
    auto it = find(v.begin(), v.end(), K);
 
    if (it != v.end())
    {
        int index = it - v.begin();
        result = index;
    }
    else {
        result = -1;
        return result;
    }
    return result;
}
