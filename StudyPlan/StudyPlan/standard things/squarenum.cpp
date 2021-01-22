//
//  squarenum.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 06/12/2020.
//

#include <iostream>
using namespace std;
 
int squarenum(){
    int n;
    cout << "\nNhap n = ";
    cin >> n;
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            cout << n << " la so chinh phuong!\n";
            return 0;
        }
        ++i;
    }
    cout << n << " khong phai so chinh phuong!\n";
    return 0;
}
