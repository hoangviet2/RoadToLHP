//
//  testcontrol.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 19/06/2021.
//

#include <stdio.h>
#include <iostream>
#include "Solutions.hpp"
using namespace std;
int mainDanang(){
    Solutions target;
    target.mmax("MMAX.INP", "MMAX.OUT");
    target.changing("CHANGE.INP", "CHANGE.OUT");
    target.sprime("SPRIME.INP", "SPRIME.OUT");
    target.palinds("PALIND.INP", "PALIND.OUT");
    cerr << "Time collapse : " << fixed << setprecision(3) << 1.000*clock()/CLOCKS_PER_SEC;
    return 0;
}
