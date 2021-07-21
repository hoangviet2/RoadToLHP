//
//  Solutions.hpp
//  StudyPlan
//
//  Created by Hoang Viet on 02/07/2021.
//

#ifndef Solutions_hpp
#define Solutions_hpp

#include <stdio.h>
#include <vector>
#include <map>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
class solutions{
public:
    void training(string,string);
    void numberX(string,string);
    void reward(string,string);
    void corved(string,string);
    vector<vector<int>> zigZagMatrix(int);
    int lowestCommonMultiple(int,int);
};
#endif /* Solutions_hpp */
