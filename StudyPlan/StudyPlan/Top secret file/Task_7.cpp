//
//  Task_7.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 30/01/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
int Fi(int);
using namespace std;
int main_hsg(){
    ifstream Inp;
    ofstream Oup;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    int n,m,temp;
    int result {0};
    Inp>>n;
    Inp>>m;
    temp = n;
    while (temp<m) {
        if (Fi(temp)<=m&&Fi(temp)>=n) {
            ++result;
            ++temp;
        }else{
            ++temp;
        }
    }
    cout<<temp<<endl;
    cout<<result<<endl;
    Oup<<result;
    Inp.close();
    Oup.close();
    return 0;
}
int Fi(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    return Fi(n-1)+Fi(n-2);
}
