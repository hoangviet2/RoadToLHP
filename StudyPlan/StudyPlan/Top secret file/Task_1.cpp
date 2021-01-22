//
//  Task_1.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 17/01/2021.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main_task_1(){
    int d,n;
    int total {0};
    ifstream Inp;
    ofstream Oup;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    Inp>>d;
    Inp>>n;
    if (d==0 || n==0) {
        total += 2;
    }else{
        total += ((d*6)*n);
    }
    Oup<<total;
    Inp.close();
    Oup.close();
    return 0;
}
