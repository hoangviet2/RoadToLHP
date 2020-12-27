//
//  factorial.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 06/12/2020.
//

#include <iostream>
using namespace std;
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int factorial()
{
    int n;
    cin >> n;
    cout << "Giai thua " << n << " la: " << giaiThua(n)<<" ";
    return 0;
}
