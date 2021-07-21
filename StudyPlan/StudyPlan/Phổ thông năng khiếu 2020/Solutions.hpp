//
//  Solutions.hpp
//  StudyPlan
//
//  Created by Hoang Viet on 25/06/2021.
//

#ifndef Solutions_hpp
#define Solutions_hpp

#include <stdio.h>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <cmath>
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
class Solution{
public:
    void PAIRLCM(string,string);
    void PARENTHESES(string,string);
    void MONITOR(string,string);
    void PAINTING(string,string);
    int lowestCommonMultiple(int,int);
    vector<vector<int>> spiralOrder(int);
};
#endif /* Solutions_hpp */
