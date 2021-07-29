//
//  PTNK2019.hpp
//  Campain
//
//  Created by Hoang Viet on 23/07/2021.
//

#ifndef PTNK2019_hpp
#define PTNK2019_hpp

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
class PTNK2019{
public:
    PTNK2019(){cout<<"Created PTNK 2018-2019"<<endl;};
    bool isPrime(long int);
    void Spiral(string,string);
    void Maxprime(string,string);
    void Pythagore(string,string);
    void Robot(string,string);
    ~PTNK2019(){cout<<"Destroyed PTNK 2018-2019"<<endl;};
};
#endif /* PTNK2019_hpp */
