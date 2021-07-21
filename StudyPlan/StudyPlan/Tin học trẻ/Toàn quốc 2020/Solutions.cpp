//
//  Solutions.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 28/06/2021.
//

#include "Solutions.hpp"
void solution::bonus(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        
    }
    Inp.close();
    Oup.close();
    return;
}
void solution::procedure(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long long int n;
        Inp>>n;
        long long int j;
        Inp>>j;
        vector<long long int> vec;
        for(long long int i=1;i<=n;++i){
            vec.push_back(i);
        }
        long long int first = 0;
        long long int last = vec.size()-1;
        map<long long int,vector<long long int>> m;
        while(last-first>0){
            
        }
    }
    Inp.close();
    Oup.close();
    return;
}
