//
//  Solutions.hpp
//  StudyPlan
//
//  Created by Hoang Viet on 19/06/2021.
//

#ifndef Solutions_hpp
#define Solutions_hpp
#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
class Solutions{
public:
    void training(string,string);
    void numberX(string,string);
    void reward(string,string);
    void corved(string,string);
    vector<vector<int>> zigZagMatrix(int);
    int lowestCommonMultiple(int,int);
};
#endif /* Solutions_hpp */
