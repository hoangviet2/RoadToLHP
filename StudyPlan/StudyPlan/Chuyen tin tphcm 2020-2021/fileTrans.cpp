//
//  fileTrans.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 24/06/2021.
//

#include <stdio.h>
#include <iostream>
#include "Solutions.hpp"
using namespace std;
int manmade(){
    //cout<<"hi"<<endl;
    Solutions solu;
    solu.demtg("DEMTG.INP", "DEMTG.OUT");
    solu.ochu("OCHU.INP", "OCHU.OUT");
    solu.phanso("PHANSO.INP", "PHANSO.OUT");
    cerr << "Time collapse : " << fixed << setprecision(3) << 1.000*clock()/CLOCKS_PER_SEC;
    return 0;
}
