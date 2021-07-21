//
//  Solutions.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 27/06/2021.
//

#include "Solutions.hpp"
void Solutions::Quest1(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long long int number;
        Inp>>number;
        long long int ans = 0;
        for(long long int i = 1;i<=number;++i){
            if(number%i == 0){
                ++ans;
            }
        }
        Oup<<ans;
    }
    Inp.close();
    Oup.close();
    return;
}
void Solutions::Quest2(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int number;
        Inp>>number;
        vector<string> collection;
        for(int i=0;i<number+2;++i){
            string temp;
            getline(Inp, temp);
            collection.push_back(temp);
        }
        collection.erase(collection.begin());
        collection.erase(collection.end()-1);
        vector<char> leter;
        vector<int> val;
        for(auto element:collection){
            int minimun = 10;
            for(auto elements:element){
                
                if(!isdigit(elements)){
                    leter.push_back(elements);
                }else{
                    minimun = min(minimun,int(elements)-48);
                }
            }
            val.push_back(minimun);
        }
        int total = 0;
        for(int i = 0;i<leter.size();++i){
            Oup<<leter.at(i)<<val.at(i)<<endl;
            total+=val.at(i);
        }
        Oup<<total<<endl;
    }
    Inp.close();
    Oup.close();
    return;
}
void Solutions::Quest3(string input, string output){
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
void Solutions::Quest4(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int number;
        Inp>>number;
        vector<long long int> tests;
        vector<long long int> xyz;
        for(int i = 0;i<number;++i){
            long long int temp;
            Inp>>temp;
            tests.push_back(temp);
        }
        for(int i=0;i<3;++i){
            long long int temp;
            Inp>>temp;
            xyz.push_back(temp);
        }
        sort(tests.begin(),tests.end());
        sort(xyz.begin(),xyz.end());
        long long int answer = (tests.at(tests.size()-1)*xyz.at(2))+(tests.at(tests.size()-2)*xyz.at(1))+(tests.at(tests.size()-3)*xyz.at(0));
        Oup<<answer;
        
    }
    Inp.close();
    Oup.close();
    return;
}
