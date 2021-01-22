//
//  reverse.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 06/12/2020.
//

#include <iostream>
using namespace std;
 
int reverse(){
    int n, tmp;
    cin >> n;
    int res = 0;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    cout << res<<endl;
    return 0;
}
