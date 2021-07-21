//
//  Solutions.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 19/06/2021.
//

#include "Solutions.hpp"
void Solutions::corved(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int x11,y11;
        int x12,y12;
        int x21,y21;
        int x22,y22;
        Inp>> x11;
        Inp>> y11;
        Inp>> x12;
        Inp>> y12;
        Inp>> x21;
        Inp>> y21;
        Inp>> x22;
        Inp>> y22;
        if(x11 == x21){
            Oup<<pow(abs(y11-y21),2);
        }
        if(x12 == x22){
            Oup<<pow(abs(y12-y22),2);
        }
        if(y11==y21){
            Oup<<pow(abs(x11-x21), 2);
        }
        if(y12==y22){
            if(x12<x22){
                Oup<<pow(abs(x12-(x22-x21-1)), 2);
            }else{
                Oup<<pow(abs(x22-(x11-x12-1)), 2);
            }
        }
    }
    Inp.close();
    Oup.close();
    return;
}
int Solutions::lowestCommonMultiple(int a, int b){
    int maxV = a*b;
    for(int i = max(a, b); i <= maxV; i++){
        if(i % a == 0 && i % b == 0){
            return i;
            break;
        }
    }
    return false;
}
void Solutions::numberX(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if (Inp) {
        int a;
        int b;
        Inp>>a;
        Inp>>b;
        int lcm = lowestCommonMultiple(a, b);
        if(a>=b){
            int distances = lcm-b;
            Oup<<distances-a;
        }else{
            int distances = lcm-a;
            Oup<<distances-b;
        }
    }
    Inp.close();
    Oup.close();
    return;
}
void Solutions::training(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int athlete;
        int test;
        Inp>>athlete;
        Inp>>test;
        vector<int> athletes;
        vector<int> tests;
        map<int,vector<int>> athleteswithtests;
        for(int i = 0;i<athlete;++i){
            int temp;
            Inp>>temp;
            athletes.push_back(temp);
        }
        for(int i = 0;i<test;++i){
            int temp;
            Inp>>temp;
            tests.push_back(temp);
        }
        vector<int> ans;
        sort(tests.begin(), tests.end());
        for (auto element:athletes) {
            for (auto elements:tests) {
                if(element>=elements){
                    element+=elements;
                }
            }
            ans.push_back(element);
        }
        for(auto element:ans){
            Oup<<element<<" ";
        }
    }
    Inp.close();
    Oup.close();
    return;
}
void Solutions::reward(string input, string output){
    ifstream Inp;
    ofstream Oup;
    Inp.open(input);
    Oup.open(output);
    if(Inp){
        int length;
        Inp>>length;
        int positionX;
        int positionY;
        Inp>>positionX;
        Inp>>positionY;
        string line1;
        string line2;
        getline(Inp,line1);
        getline(Inp,line2);
        vector<vector<int>> matrix = zigZagMatrix(length);
        int ans = 0;
        --positionX;
        --positionY;
        ans+=matrix.at(positionX).at(positionY);
        matrix.at(positionX).at(positionY) = 0;
        for(auto element:line2){
            if(element == 'S'){
                ++positionX;
                ans+=matrix.at(positionX).at(positionY);
                matrix.at(positionX).at(positionY) = 0;
            }else if(element == 'N'){
                --positionX;
                ans+=matrix.at(positionX).at(positionY);
                matrix.at(positionX).at(positionY) = 0;
            }else if(element == 'E'){
                ++positionY;
                ans+=matrix.at(positionX).at(positionY);
                matrix.at(positionX).at(positionY) = 0;
            }else if(element == 'W'){
                --positionY;
                ans+=matrix.at(positionX).at(positionY);
                matrix.at(positionX).at(positionY) = 0;
            }
        }
        Oup<<ans;
    }
    Inp.close();
    Oup.close();
    return;
}
vector<vector<int>> Solutions::zigZagMatrix(int n){
    vector<vector<int>> arr(n,vector<int> (n));
    int row = 0, col = 0;
    int value = 1;
    // Boolean variable that will true if we
    // need to increment 'row' value otherwise
    // false- if increment 'col' value
    bool row_inc = 0;
  
    // Print matrix of lower half zig-zag pattern
    int mn = n;
    for (int len = 1; len <= mn; ++len) {
        for (int i = 0; i < len; ++i) {
            arr[row][col] = value;
            ++value;
  
            if (i + 1 == len)
                break;
            // If row_increment value is true
            // increment row and decrement col
            // else decrement row and increment
            // col
            if (row_inc)
                ++row, --col;
            else
                --row, ++col;
        }
  
        if (len == mn)
            break;
  
        // Update row or col value according
        // to the last increment
        if (row_inc)
            ++row, row_inc = false;
        else
            ++col, row_inc = true;
    }
  
    // Update the indexes of row and col variable
    if (row == 0) {
        if (col == n - 1)
            ++row;
        else
            ++col;
        row_inc = 1;
    }
    else {
        if (row == n - 1)
            ++col;
        else
            ++row;
        row_inc = 0;
    }
  
    // Print the next half zig-zag pattern
    int MAX = n - 1;
    for (int len, diag = MAX; diag > 0; --diag) {
  
        if (diag > mn)
            len = mn;
        else
            len = diag;
  
        for (int i = 0; i < len; ++i) {
            arr[row][col] = value;
            ++value;
  
            if (i + 1 == len)
                break;
  
            // Update row or col value according
            // to the last increment
            if (row_inc)
                ++row, --col;
            else
                ++col, --row;
        }
  
        // Update the indexes of row and col variable
        if (row == 0 || col == n - 1) {
            if (col == n - 1)
                ++row;
            else
                ++col;
  
            row_inc = true;
        }
  
        else if (col == 0 || row == n - 1) {
            if (row == n - 1)
                ++col;
            else
                ++row;
  
            row_inc = false;
        }
    }
    return arr;
}
