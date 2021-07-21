//
//  filetrans.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 02/07/2021.
//

#include <stdio.h>
#include <iostream>
#include "Solutions.hpp"
using namespace std;
int mamain(){
    solutions target;
    target.numberX("Input1.INP", "Input1.OUT");
    target.training("Input3.INP", "Input3.OUT");
    target.corved("Input4.INP", "Input4.OUT");
    target.reward("Input2.INP", "Input2.OUT");
    return 0;
}
