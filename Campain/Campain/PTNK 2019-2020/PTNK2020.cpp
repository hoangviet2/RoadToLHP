//
//  PTNK2020.cpp
//  Campain
//
//  Created by Hoang Viet on 23/07/2021.
//

#include "PTNK2020.hpp"
long int PTNK2020::gcd( long int a, long int b) {
  while (b != 0)  {
    long int t = b;
    b = a % b;
    a = t;
  }
  return a;
}
long int PTNK2020::gocd(long int a,long int b,long int c){
    return gcd(c,gcd(a, b));
}
void PTNK2020::gcd(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int n;
        Inp>>n;
        vector<long int> chain;
        for(int i=0;i<n;++i){
            long int temp;
            Inp>>temp;
            chain.push_back(temp);
        }
        long int mx = 0;
        for(long int i=1;i<chain.size()-2;++i){
            mx = max(mx,gocd(chain.at(i-1), chain.at(i), chain.at(i+1)));
        }
        Oup<<mx;
    }
    Inp.close();
    Oup.close();
    return;
}
bool PTNK2020::isSymprime(long int a){
    long int aBefore = a-2;
    long int aAfter = a+2;
    while(!isPrimeNumber(aBefore) || !isPrimeNumber(aAfter)){
        if(isPrimeNumber(aBefore)){
            aAfter+=2;
        }else if(isPrimeNumber(aAfter)){
            aBefore-=2;
        }else{
            aBefore-=2;
            aAfter+=2;
        }
    }
    return a==((aBefore+aAfter)/2);
}
bool PTNK2020::isPrimeNumber(long int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    long int squareRoot = (long int) sqrt(n);
    long int i;
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void PTNK2020::symprime(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int total;
        Inp>>total;
        for(long int i=0;i<total;++i){
            long int temp;
            Inp>>temp;
            if(isSymprime(temp)){
                Oup<<"YES"<<endl;
            }else{
                Oup<<"NO"<<endl;
            }
        }
    }
    Inp.close();
    Oup.close();
    return;
}
void PTNK2020::itable(string input, string output){
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
long int PTNK2020::energy(long int x, long int y, long int z){
    return ((x-y) * (y-z));
}
void PTNK2020::maxenergy(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        long int times;
        Inp>>times;
        vector<long int> point;
        for(long int i=0;i<times;++i){
            long int temp;
            Inp>>temp;
                point.push_back(temp);
        }
        //sort(point.begin(), point.end());
        long int mx = 0;
        long int start = 0;
        long int end = point.size()-1;
        while(abs(start-end)>1){
            for(long int unstable = start+1;unstable<end;++unstable){
                mx = max(mx,energy(point.at(start), point.at(unstable), point.at(end)));
            }
            ++start;
            --end;
        }
        Oup<<mx;
    }
    Inp.close();
    Oup.close();
    return;
}
