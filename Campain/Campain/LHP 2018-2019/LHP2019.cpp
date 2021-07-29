//
//  LHP2019.cpp
//  Campain
//
//  Created by Hoang Viet on 23/07/2021.
//

#include "LHP2019.hpp"
void LHP2019::dtron(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int a;
        long int b;
        Inp>>a;
        Inp>>b;
        long int ans = 0;
        for(long int i=0;i<a;++i){
            long int temp;
            Inp>>temp;
            if(temp>b){
                ++ans;
            }
        }
        Oup<<ans;
    }
    Inp.close();
    Oup.close();
    return;
}
void LHP2019::muabi(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int a;
        long int b;
        Inp>>a;
        Inp>>b;
        map<long int,long int> marbles;
        for(long int i=0;i<b;++i){
            long int tempA;
            long int tempB;
            Inp>>tempA;
            Inp>>tempB;
            marbles[tempA] = tempB;
        }
        vector<long int> marblesBox;
        for(auto element:marbles){
            marblesBox.push_back(element.first);
        }
        long int ans = 0;
        for(long int i=0;i<marblesBox.size();++i){
            for(long int j=0;j<marblesBox.size();++j){
                if(i!=j){
                    if(marblesBox.at(i)+marblesBox.at(j)==a){
                        ans = max(ans,((marblesBox.at(i)*marbles[marblesBox.at(i)]) + (marblesBox.at(j)*marbles[marblesBox.at(j)])));
                    }
                }
            }
        }
        Oup<<ans;
    }
    Inp.close();
    Oup.close();
    return;
}
void LHP2019::phantich(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int n;
        long int k;
        Inp>>n;
        Inp>>k;
        if(n%k!=0) Oup<<0;
    }
    Inp.close();
    Oup.close();
    return;
}
