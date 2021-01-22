//
//  Task_3.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 22/01/2021.
//
#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main(){
    ifstream Inp;
    ofstream Oup;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    Inp.close();
    Oup.close();
    return 0;
}
