//
//  Solutions.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 26/06/2021.
//

#include "Solutions.hpp"
void soltuions::puzzle(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        map<int,vector<int>> m;
        for(int i=0;i<3;++i){
            int temp;
            int tmp;
            Inp>>temp;
            Inp>>tmp;
            m[temp*tmp].push_back(temp);
            m[temp*tmp].push_back(tmp);
        }
        int maxArea = 0;
        int totalFirst = 0;
        int totalSecond = 0;
        for(auto element:m){
            maxArea = max(element.first,maxArea);
        }
        int maxfirst = m[maxArea].at(0);
        int maxsecond = m[maxArea].at(1);
        vector<int> maxpair = m[maxArea];
        m.erase(m.find(maxArea));
        for(auto element:m){
            totalFirst += element.second.at(0);
            totalSecond += element.second.at(1);
        }
        if(totalFirst == maxfirst || totalFirst == maxsecond){
            Oup<<round(sqrt(pow(2,2)+pow(4, 2)));
        }else if(totalSecond == maxfirst || totalSecond == maxsecond){
            
        }
        else{
            Oup<<-1;
        }
    }
    Inp.close();
    Oup.close();
    return;
}
