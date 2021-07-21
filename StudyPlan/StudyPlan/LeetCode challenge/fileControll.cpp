//
//  fileControll.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 16/06/2021.
//

#include <stdio.h>
#include <fstream>
#include <iostream>
#include "TwoSum.hpp"
using namespace std;
int mainFile(){
    Solutions result = Solutions();
    vector<int> output = result.twoSum({3,2,4},6);
    vector<string> outstring = result.subStrings("abc", 3);
    cout<<endl;
    return 0;
}
