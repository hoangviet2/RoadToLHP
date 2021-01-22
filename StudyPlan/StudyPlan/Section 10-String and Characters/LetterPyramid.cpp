//
//  LetterPyramid.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 30/12/2020.
//

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
void LetterPyramid() {
    string characters {};
    string middlechar {};
    string halfchar {};
    string rehalfchar {};
    cout<<"write the letters chain you want to fill: ";
    size_t index =0;
    getline(cin, characters);
    cout<<characters.length()<<endl;
    size_t spacetimes = characters.length()-1;
    for (size_t i=1;i<=characters.length();++i){
        size_t length = i+index;
        length = length/2 +0.5;
        ++index;
        middlechar = characters.at(length);
        halfchar = characters.substr(0,length);
        rehalfchar = halfchar;
        reverse(rehalfchar.begin(), rehalfchar.end());
        string space (spacetimes,' ');
        spacetimes = spacetimes -1;
        cout<<space<<halfchar<<middlechar<<rehalfchar<<endl;
    }
}
