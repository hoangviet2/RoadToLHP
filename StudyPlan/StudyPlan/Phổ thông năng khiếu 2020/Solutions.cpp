//
//  Solutions.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 25/06/2021.
//

#include "Solutions.hpp"
vector<vector<int>> Solution::spiralOrder(int n) {
    vector<vector<int>> ans (n,vector<int> (n)) ;
    int r1 = 0, r2 = ans.size() - 1;
    int c1 = 0, c2 = ans.at(0).size() - 1;
    int i = 0;
    while (r1 <= r2 && c1 <= c2) {
        if(i>2){
            i=0;
        }else{
            for (int c = c1; c <= c2; c++) ans[r1][c] = i;
            for (int r = r1 + 1; r <= r2; r++) ans[r][c2] = i;
            if (r1 < r2 && c1 < c2) {
                for (int c = c2 - 1; c > c1; c--) ans[r2][c] = i;
                for (int r = r2; r > r1; r--) ans[r][c1] = i;
            }
            r1++;
            r2--;
            c1++;
            c2--;
            ++i;
        }
    }
    return ans;
}
int Solution::lowestCommonMultiple(int a, int b){
    int maxV = a*b;
    for(int i = max(a, b); i <= maxV; i++){
        if(i % a == 0 && i % b == 0){
            return i;
            break;
        }
    }
    return false;
}
void Solution::PAIRLCM(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int a;
        Inp>>a;
        int first = 0;
        int last = a;
        int res = 0;
        while (last>=first) {
            res = max(res, lowestCommonMultiple(first, last));
            ++first;
            --last;
        }
        Oup<<res;
    }
    Inp.close();
    Oup.close();
    return;
}
void Solution::PAINTING(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int size;
        Inp>>size;
        vector<vector<int>> matrix = spiralOrder(size);
        Inp>>size;
        unordered_map<int,int> m;
        for(int i=0;i<size;++i){
            int temp,temporary;
            Inp>>temp;
            Inp>>temporary;
            int tempVal = matrix[temp-1][temporary-1];
            if(tempVal==0){
                Oup<<"RED"<<endl;
            }else if(tempVal==1){
                Oup<<"BLUE"<<endl;
            }else{
                Oup<<"YELLOW"<<endl;
            }
        }
    }
    Inp.close();
    Oup.close();
    return;
}
void Solution::PARENTHESES(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int condi = 0;
        int maxcondi = 0;
        string test;
        getline(Inp, test);
        for(auto element:test){
            if(element=='('){
                ++condi;
            }else if (element == ')'){
                --condi;
                maxcondi = max(maxcondi,abs(condi));
            }
        }
        if(condi==0){
            if(maxcondi>=1){
                Oup<<maxcondi;
            }else{
                Oup<<0;
            }
        }else{
            Oup<<-1;
        }
    }
    Inp.close();
    Oup.close();
    return;
}
void Solution::MONITOR(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int a;
        Inp>>a;
        vector<int> vec;
        for(int i=0;i<a;++i){
            int temp;
            Inp>>temp;
            vec.push_back(temp);
        }
        map<int,vector<int>> m;
        for(int i=0;i<vec.size();++i){
            m[vec.at(i)].push_back(i+1);
        }
        map<int,int> ansM;
        for(auto element:m){
            ansM[element.second.at(element.second.size()-1)-element.second.at(0)+1] = element.first;
        }
        int firstKey = 0;
        for(auto element:ansM){
            firstKey = max(element.first,firstKey);
        }
        Oup<<ansM[firstKey]<<endl;
        Oup<<firstKey<<endl;
    }
    Inp.close();
    Oup.close();
    return;
}
