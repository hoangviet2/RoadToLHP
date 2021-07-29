//
//  PTNK2019.cpp
//  Campain
//
//  Created by Hoang Viet on 23/07/2021.
//

#include "PTNK2019.hpp"
void PTNK2019::Spiral(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int n;
        Inp>>n;
        long int start = n-1;
        long int squareVal = n;
        long int result = n;
        while (start>0) {
            squareVal += start*2;
            result += squareVal;
            --start;
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return;
}
bool PTNK2019::isPrime(long int n){
    for(long int i=3; i<=n/2; i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}
void PTNK2019::Maxprime(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        string line;
        getline(Inp,line);
        if(isdigit(line.at(line.length()-1))){
            if((int(line.at(line.length()-1))-48 %2)==0 ){
                Oup<<"Mày bị ngu à"<<endl;
            }
        }
        for(long int i=0;i<line.length();++i){
            if(line.at(i)=='?'){
                line.at(i)='0';
            }
        }
        long int first = 0;
        long int second = 0;
        for(long int i=0;i<line.length();++i){
            if(line.at(i)=='?'){
                line.at(i)='0';
            }
        }
        for(long int i=0;i<line.length();++i){
            if(line.at(i)=='0'){
                first = i;
                line.at(i)= '9';
                break;
            }
        }
        for(long int i=0;i<line.length();++i){
            if(line.at(i)=='0'){
                second = i;
                line.at(i)= '9';
                break;
            }
        }
        while(!isPrime(stol(line))){
            if(line.at(second)!='0'){
                line.at(second)--;
            }else{
                line.at(second) = '9';
                line.at(first)--;
            }
        }
        Oup<<line;
    }
    Inp.close();
    Oup.close();
    return;
}
void PTNK2019::Pythagore(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int border;
        Inp>>border;
        long int a,b,c;
        c = border/2-1;
        long int ans = 0;
        while(c>=c/2){
            a=1;
            b=c-1;
            while(a<b){
                long int pythagores = pow(a, 2) + pow(b, 2);
                if(pythagores == pow(c, 2) && a+b+c == border) ++ans;
                --b;
                ++a;
            }
            --c;
        }
        Oup<<ans;
    }
    Inp.close();
    Oup.close();
    return;
}
void PTNK2019::Robot(string input, string output){
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
