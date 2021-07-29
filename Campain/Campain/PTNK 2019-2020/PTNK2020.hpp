//
//  PTNK2020.hpp
//  Campain
//
//  Created by Hoang Viet on 23/07/2021.
//

#ifndef PTNK2020_hpp
#define PTNK2020_hpp
#include <stdio.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdarg>
#include <cstdio>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <atomic>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <fstream>
using namespace std;
class PTNK2020{
public:
    PTNK2020(){cout<<"Created PTNK 2019-2020"<<endl;};
    void symprime(string,string);
    void maxenergy(string,string);
    void itable(string,string);
    void gcd(string,string);
    bool isSymprime(long int);
    bool isPrimeNumber(long int);
    long int energy(long int,long int,long int);
    long int gcd(long int,long int);
    long int gocd(long int,long int,long int);
    ~PTNK2020(){cout<<"Destroyed PTNK 2019-2020"<<endl;};
};
#endif /* PTNK2020_hpp */
