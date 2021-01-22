//
//  MixedExpressionAndConversion.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 31/12/2020.
//
//MixedExpressionAndConversion
#include <stdio.h>
#include <iostream>
using namespace std;
int MixedExpressionAndConversion(){
    int total {0};
    int num_1 {0};
    int num_2 {0};
    int num_3 {0};
    double average {};
    cout<<"Please write 3 numbers: ";
    cin>>num_1;
    cin>>num_2;
    cin>>num_3;
    total = num_1+num_2+num_3;
    average = static_cast<double>(total)/3;
    cout<<"total of 3 numbers is: "<<total<<" and the average of them is: "<<average<<endl;
    return 0;
}
