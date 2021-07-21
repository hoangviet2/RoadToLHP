//
//  PhoThongNangKhieuTestControl.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 19/06/2021.
//
//
#include <stdio.h>
#include "Solutions.hpp"
int mainNangKhieu(){
    Solutions target;
    target.training("TRAINING.INP", "TRAINING.OUT");
    target.reward("REWARD.INP", "REWARD.OUT");
    target.numberX("NUMBERX.INP", "NUMBERX.OUT");
    target.corved("COVERED.INP", "COVERED.OUT");
    cerr << "Time collapse : " << fixed << setprecision(3) << 1.000*clock()/CLOCKS_PER_SEC;
    return 0;
}
