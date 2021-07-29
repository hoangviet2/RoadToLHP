//
//  Solutions.cpp
//  Campain
//
//  Created by Hoang Viet on 22/07/2021.
//

#include "Solutions.hpp"
void LHP2020::xuathien(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int i;
        Inp>>i;
        Oup<<(i-4+1)*4<<endl;
    }
    Inp.close();
    Oup.close();
    return;
}
long int LHP2020::numberReturn(long int a, long int increasing){
    if(LHP2020::squareNumberDectector(a+increasing)){
        return sqrt(a+increasing)+1;
    }
    return a+increasing;
}
bool LHP2020::squareNumberDectector(long int a){
    return (sqrt(a)*sqrt(a)) == a;
}
void LHP2020::biendoi(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int times;
        Inp>>times;
        if(times==1) Oup<<0;
        vector<vector<long int>> matrix(times,vector<long int> (times));
        long int startPoint = 1e6;
        long int increasing = 1e6;
        for(long int i=0;i<times;++i){
            for(long int j=0;j<times;++j){
                long long int temp;
                Inp>>temp;
                matrix[i][j] = temp;
            }
        }
        if(matrix[times-1][times-1] == 0 || matrix[times-1][times-2] == 0 ) Oup<<0;
        startPoint = matrix[times-1][times-1];
        increasing = abs(startPoint-matrix[times-1][times-2]);
        
        vector<vector<long int>> answer(times,vector<long int> (times));
        for(long int i=0;i<times;++i){
            for(long int j=0;j<times;++j){
                if(i==0&&j==0){
                    answer[i][j] = startPoint;
                }else{
                    answer[i][j] = numberReturn(startPoint, increasing);
                    startPoint = numberReturn(startPoint, increasing);
                }
            }
        }
        for(auto element:answer){
            for(auto elements:element){
                Oup<<elements<<" ";
            }
            Oup<<endl;
        }
    }
    Inp.close();
    Oup.close();
    return;
}
void LHP2020::catghep(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        string line1;
        string line2;
        getline(Inp,line1);
        getline(Inp,line2);
        set<long int> numbers;
        string temp = "";
        map<char,int> mapple;
        for(auto element:line1){
            mapple[element] = 0;
        }
        for(auto element:line1){
            mapple[element]++;
        }
        for(long int i = 0;i<line2.length();++i){
            if(line2.at(i)!=' '){
                temp+=line2.at(i);
            }else{
                numbers.insert(stol(temp));
                temp = "";
            }
        }
        if(temp.length()!=0){
            numbers.insert(stol(temp));
        }
        vector<long int> Invalid;
        vector<long int> Valid;
        for(auto element:numbers){
            string strelement = to_string(element);
            for(auto character:strelement){
                if(mapple.find(character)!=mapple.end()){
                    if(mapple[character]>0){
                        --mapple[character];
                    }else{
                        Invalid.push_back(element);
                        break;
                    }
                }else{
                    Invalid.push_back(element);
                    break;
                }
            }
            if(find(Invalid.begin(),Invalid.end(),element)==Invalid.end()){
                Valid.push_back(element);
            }
        }
        sort(Valid.begin(),Valid.end(),greater<>());
        for(auto element:Valid){
            Oup<<element<<" ";
        }
        Oup<<endl;
        for(auto element:Invalid){
            Oup<<element<<" ";
        }
    }
    Inp.close();
    Oup.close();
    return;
}
