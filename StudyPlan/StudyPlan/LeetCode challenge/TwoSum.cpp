//
//  TwoSum.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 16/06/2021.
//

#include "TwoSum.hpp"
vector<int> Solutions::twoSum(vector<int> nums, int target){
    map<int,int> m;
    for(int i=0;i<nums.size();++i){
        m[i] = target-nums.at(i);
    }
    for(auto element:m){
        if(find(nums.begin(),nums.end(),element.second)!=nums.end() && element.first!=int(find(nums.begin(),nums.end(),element.second)-nums.begin())){
            return {element.first,int(find(nums.begin(),nums.end(),element.second)-nums.begin())};
        }
    }
    return {};
}
vector<int> Solutions::sumZero(int target){
    vector<int> ans;
    int total = 0;
    for(int i = 1;i<target;++i){
        ans.push_back(i);
        total+=i;
    }
    ans.push_back(total*-1);
    return ans;
}
vector<int> Solutions::subInteger(string stringInt, int stringLength){
    vector<string> ans;
    vector<int> subInt;
    for (int i = 0; i < stringLength; i++)
        for (int len = 1; len <= stringLength - i; len++)
            ans.push_back(stringInt.substr(i, len));
    for (auto elem:ans) {
        subInt.push_back(stoi(elem));
    }
    return subInt;
}
vector<string> Solutions::subStrings(string string, int stringLength){
    vector<std::string> ans;
    for (int i = 0; i < stringLength; i++)
        for (int len = 1; len <= stringLength - i; len++)
            ans.push_back(string.substr(i, len));
    return ans;
}
