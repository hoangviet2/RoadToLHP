//
//  PTNK test.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 28/05/2021.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
vector<vector<int>> zigZagMatrix(int n, int m){
    vector<vector<int>> answer(n,vector<int> (m));
    int value = 1;
    int row = 0, col = 0;
  
    // Boolean variable that will true if we
    // need to increment 'row' value otherwise
    // false- if increment 'col' value
    bool row_inc = 0;
  
    // Print matrix of lower half zig-zag pattern
    int mn = min(m, n);
    for (int len = 1; len <= mn; ++len) {
        for (int i = 0; i < len; ++i) {
            answer[row][col] = value;
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
        if (col == m - 1)
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
    int MAX = max(m, n) - 1;
    for (int len, diag = MAX; diag > 0; --diag) {
  
        if (diag > mn)
            len = mn;
        else
            len = diag;
  
        for (int i = 0; i < len; ++i) {
            answer[row][col] = value;
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
        if (row == 0 || col == m - 1) {
            if (col == m - 1)
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
    return answer;
}
int main(){
    ifstream Inp;
    ofstream Oup;
    Inp.open("ZigzagArray.INP");
    Oup.open("ZigzagArray.OUT");
    if(Inp){
        int n;
        int m;
        int positionX;
        int positionY;
        string command;
        Inp>>n;
        Inp>>m;
        Inp>>positionX;
        Inp>>positionY;
        getline(Inp, command);
        getline(Inp, command);
        cout<<n<<" "<<m<<" "<<positionX<<" "<<positionY<<endl;
        cout<<command;
        vector<vector<int>> matrix  = zigZagMatrix(n, m);
        int ans = matrix.at(positionX).at(positionY);
        for(auto element:command){
            if(element == 'N'){
                ans+=matrix.at(positionX-1).at(positionY);
                positionX = positionX-1;
            }else if(element == 'E'){
                ans+=matrix.at(positionX).at(positionY+1);
                positionY = positionY+1;
            }else if (element == 'S'){
                ans+=matrix.at(positionX+1).at(positionY);
                positionX = positionX+1;
            }else if(element == 'W'){
                ans+=matrix.at(positionX).at(positionY-1);
                positionY = positionY-1;
            }
        }
        Oup<<ans;
    }
    Inp.close();
    Oup.close();
    return 0;
}
