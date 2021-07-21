//
//  Solutions.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 24/06/2021.
//

#include "Solutions.hpp"
void Solutions::ochu(string Input, string Output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(Input);
    Oup.open(Output);
    if(Inp){
        int a,b;
        Inp>>a;
        Inp>>b;
        vector<string> questions;
        vector<string> clues;
        for(int i = 0;i<=a*2;++i){
            string temp;
            getline(Inp, temp);
            if(i<4){
                questions.push_back(temp);
            }else{
                clues.push_back(temp);
            }
        }
        questions.erase(questions.begin());
        map<int,vector<string>> m;
        int index =-1;
        for(auto element:questions){
            string zeros = "";
            string nonzeros = "";
            for(auto character:element){
                if(character == '0'){
                    zeros += character;
                }else{
                    nonzeros += character;
                }
            }
            int ind = element.find(nonzeros.at(0));
            ++index;
            if(ind>=b/2){
                m[index] = {zeros,nonzeros};
            }else{
                m[index] = {nonzeros,zeros};
            }
            for( int i = 0;i<m.size();++i){
                if(m.at(i).back().at(0) != '0'){
                    for(auto elements:clues){
                        if (elements.size() == m.at(i).back().size()) {
                            for(auto ckerecter:m.at(i).back()){
                                if(!isdigit(ckerecter) && m.at(i).back().find(ckerecter)==elements.find(ckerecter)){
                                    m.at(i).back() = elements;
                                }
                            }
                        }
                    }
                }else{
                    for(auto elements:clues){
                        if (elements.size() == m.at(i).front().size()) {
                            for(auto ckerecter:m.at(i).front()){
                                if(!isdigit(ckerecter) && m.at(i).front().find(ckerecter)==elements.find(ckerecter)){
                                    m.at(i).front() = elements;
                                }
                            }
                        }
                    }
                }
            }
        }
        for(auto element:m){
            Oup<<element.second.at(0)<<element.second.at(1)<<endl;
        }
    }
    Inp.close();
    Oup.close();
    return;
}
void Solutions::phanso(string Input, string Output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(Input);
    Oup.open(Output);
    if(Inp){
        int total;
        Inp>>total;
        vector<int> above;
        vector<int> below;
        for(int i=0;i<total;++i){
            int temp;
            Inp>>temp;
            above.push_back(temp);
        }
        for(int i=0;i<total;++i){
            int temp;
            Inp>>temp;
            below.push_back(temp);
        }
        map<double,vector<int>> m;
        for(int i=0;i<total;++i){
            if(below.at(i)!=0){
                m[double(above.at(i))/double(below.at(i))].push_back(above.at(i));
                m[double(above.at(i))/double(below.at(i))].push_back(below.at(i));
            }
        }
        vector<int> resAbove;
        vector<int> resBelow;
        for(auto element:m){
            if(element.second.size()>2){
                for(int i = 0;i<element.second.size();++i){
                    if(i%2==0){
                        Oup<<element.second.at(i)<<" ";
                    }
                }
            }else{
                Oup<<element.second.at(0)<<" ";
            }
        }
        Oup<<endl;
        for(auto element:m){
            if(element.second.size()>2){
                for(int i = 0;i<element.second.size();++i){
                    if(i%2!=0){
                        Oup<<element.second.at(i)<<" ";
                    }
                }
            }else{
                Oup<<element.second.at(1)<<" ";
            }
        }
    }
    Inp.close();
    Oup.close();
    return;
}
void Solutions::demtg(string Input, string Ouput){
    ifstream Inp;
    ofstream Oup;
    Inp.open(Input);
    Oup.open(Ouput);
    if(Inp){
        int a,b;
        Inp>>a;
        Inp>>b;
        if(b>0){
            Oup<< (b*2)*Solutions::factorial(a+1);
        }else{
            Oup<<Solutions::factorial(a);
        }
        
    }
    Inp.close();
    Oup.close();
    return;
}
int Solutions::factorial(int n){
    if(n > 1)
        return n * Solutions::factorial(n - 1);
    else
        return 1;
}
