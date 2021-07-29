//
//  LHP2018.cpp
//  Campain
//
//  Created by Hoang Viet on 24/07/2021.
//

#include "LHP2018.hpp"
long int LHP2018::longestInte(string s, long int n,long int length){
    long int ans = -1;
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            if(len-i==length-1){
                ans = max(ans, stol(s.substr(i,len)));
            }
    return ans;
}
void LHP2018::erase(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int length;
        Inp>>length;
        string inputstring = to_string(length);
        Inp>>length;
        long int stringAnswerLength = inputstring.length()-length;
        string answer = "";
        stack<int> st;
        long int ind = 0;
        while(st.size()<stringAnswerLength){
            if(st.size()==0){
                st.push(int(inputstring.at(ind))-48);
            }else{
                if(st.top()<int(inputstring.at(ind))-48){
                    st.pop();
                    st.push(int(inputstring.at(ind))-48);
                    
                }else{
                    st.push(int(inputstring.at(ind))-48);
                }
            }
            ++ind;
        }
        while(st.size()>0){
            answer+=to_string(st.top());
            st.pop();
        }
        reverse(answer.begin(),answer.end());
        Oup<<answer;
    }
    Inp.close();
    Oup.close();
    return;
}
void LHP2018::substring(string input, string output){
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
void LHP2018::fence(string input, string output){
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
