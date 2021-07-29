//
//  Transitions.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 19/07/2021.
//

#include <stdio.h>
#include "CodeSignalPracticeAssignment.hpp"
using namespace std;
void showVector(vector<int> vectors){
    for(auto element:vectors){
        cout<<element<<" ";
    }
    cout<<endl;
    return;
}
void showVector(vector<string> vectors){
    for(auto element:vectors){
        cout<<element<<" ";
    }
    cout<<endl;
    return;
}
vector<int> generateRandomInput(int top,int bot,int element){
    vector<int> result;
    for(int i=0;i<element;++i){
        result.push_back(rand())
    }
    return result;
}
int main(){
    Assignment target;
    cout<<target.add(12, 20)<<endl;
    cout<<target.centuryFromYear(1997)<<endl;
    cout<<boolalpha<<target.checkPalindrome("aba")<<endl;
    cout<<target.shapeArea(3)<<endl;
    cout<<target.makeArrayConsecutive2({})<<endl;
    cout<<target.matrixElementsSum({{}})<<endl;
    cout<<boolalpha<<target.almostIncreasingSequence({})<<endl;
    cout<<target.adjacentElementsProduct({})<<endl;
    showVector(target.allLongestStrings({}));
    cout<<target.commonCharacterCount("", "");
    cout<<target.isLucky(6);
    showVector(target.sortByHeight({}));
    cout<<target.reverseInParentheses("");
    return 0;
}
