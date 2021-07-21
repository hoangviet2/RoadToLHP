//
//  Solutions.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 19/06/2021.
//

#include "Solutions.hpp"
vector<string> Solutions::subString(string s, int n){
    vector<string> ans;
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            if(len-i<n){
                 ans.push_back(s.substr(i, len));
            }
    return ans;
}
void Solutions::mmax(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int totalElem;
        Inp>>totalElem;
        vector<int> arr;
        for(int i=0;i<totalElem;++i){
            int temp;
            Inp>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end(), greater<>());
        int threetimes = arr.at(0)*arr.at(1)*arr.at(2);
        int twotimes = arr.at(0)*arr.at(1);
        Oup<< max(threetimes,twotimes);
    }
    Inp.close();
    Oup.close();
    return;
}
void Solutions::changing(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        string chain;
        string chainreact = "12345678";
        getline(Inp, chain);
        vector<char> characters;
        for (auto element:chain) {
            if(element=='R'){
                chainreact.insert(chainreact.begin(), chainreact.at(chainreact.size()-1));
                chainreact.erase(chainreact.size()-1);
            }else{
                chainreact.insert(chainreact.end(), chainreact.at(0));
                chainreact.erase(0);
            }
        }
        Oup<<stoi(chainreact);
    }
    Inp.close();
    Oup.close();
    return;
}
void Solutions::palinds(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        string strtest;
        getline(Inp, strtest);
        //cout<<strtest<<endl;
        vector<string> stringCollection = subString(strtest, strtest.size());
        vector<int> answer;
        
        for(auto element:stringCollection){
            string copyElement = element;
            reverse(copyElement.begin(), copyElement.end());
            if(copyElement==element){
                answer.push_back(stoi(element));
            }
        }
        sort(answer.begin(), answer.end(), greater<>());
        Oup<<to_string(answer.at(0)).size()<<endl;
        Oup<<answer.at(0);
    }
    Inp.close();
    Oup.close();
}
void Solutions::sprime(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int pairNum;
        Inp>>pairNum;
        map<int,int> startEnd;
        for(int i=0;i<pairNum;++i){
            int tempstart;
            int tempend;
            Inp>>tempstart;
            Inp>>tempend;
            startEnd[tempstart] = tempend;
        }
        map<int,int> m;
        for(auto element:startEnd){
            for(int i=element.first;i<=element.second;++i){
                int total = 0;
                int copy = i;
                while(copy>0){
                    total+= copy%10;
                    copy/=10;
                }
                if(total%5==0){
                    m[total] = 1;
                }
            }
            Oup<<m.size();
            Oup<<endl;
        }
    }
    Inp.close();
    Oup.close();
    return;
}
