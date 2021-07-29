//
//  LHP2018.hpp
//  Campain
//
//  Created by Hoang Viet on 24/07/2021.
//

#ifndef LHP2018_hpp
#define LHP2018_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
class LHP2018{
public:
    LHP2018(){cout<<"Created LHP 2017-2018"<<endl;};
    void erase(string,string);
    void substring(string,string);
    void fence(string,string);
    long int longestInte(string, long int,long int);
    ~LHP2018(){cout<<"Destroyed LHP 2017-2018"<<endl;};
};
#endif /* LHP2018_hpp */
