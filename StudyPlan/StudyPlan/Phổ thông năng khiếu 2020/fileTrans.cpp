//
//  fileTrans.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 25/06/2021.
//

#include <stdio.h>
#include <iostream>
#include "Solutions.hpp"
using namespace std;
int maindale(){
    Solution so;
    so.PAIRLCM("PAIRLCM.INP", "PAIRLCM.OUT");
    so.PARENTHESES("PARENTHESES.INP", "PARENTHESES.OUT");
    so.MONITOR("MONITOR.INP", "MONITOR.OUT");
    so.PAINTING("PAINTING.INP", "PAINTING.OUT");
    cerr << "Time collapse : " << fixed << setprecision(3) << 1.000*clock()/CLOCKS_PER_SEC;
    return 123;
}
