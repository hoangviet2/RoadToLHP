//
//  perfectnum.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 06/12/2020.
//

#include<iostream>
using namespace std;
bool check(int n){
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n) return true; // tra ve true
    return false;
}
int perfectnum(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    if(check(n) )
        cout<<n<<" la so hoan hao.";
    else
        cout<<n<<" khong la so hoan hao.";
    return 0;
}
