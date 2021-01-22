//
//  Section_Challenge.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 02/01/2021.
//

#include <iostream>
#include <vector>
using namespace std;
int mainvec(){
    vector <int> vec1;
    vector <int> vec2;
    vector <vector<int>> vec_2d;
    //vector 1
    vec1.push_back(10);
    vec1.push_back(20);
    cout<<"Vector 1: "<<endl;
    for (auto items:vec1){
        cout<<items<<endl;
    }
    cout<<"vector 1 size is: "<<vec1.size()<<endl;
    //vector 2
    vec2.push_back(100);
    vec2.push_back(200);
    for (auto items:vec2){
        cout<<items<<endl;
    }
    cout<<"vector 2 size is: "<<vec2.size()<<endl;
    //vector_2d
    vec_2d.push_back(vec1);
    vec_2d.push_back(vec2);
    cout<<vec_2d.at(0).at(0)<<" "<<vec_2d.at(0).at(1)<<endl;
    cout<<vec_2d.at(1).at(0)<<" "<<vec_2d.at(1).at(1)<<endl;
    for (auto item:vec1){
        cout<<item<<endl;
    }
    cout<<endl;
    return 0;
}
