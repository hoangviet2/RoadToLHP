//
//  Equality.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 31/12/2020.
// Equality

#include <iostream>
using namespace std;
int Equality(){
    char num_1,num_2 {};
    bool equal{false};
    bool notequal{true};
    cout<<boolalpha;
    cout<<"write 2 numbers: ";
    cin>>num_1>>num_2;
    equal = (num_1==num_2);
    notequal = (num_1!=num_2);
    cout<<"comparation result is(equal): "<<equal<<endl;
    cout<<"comparation result is(notequal): "<<notequal<<endl;
    return 0;
}
