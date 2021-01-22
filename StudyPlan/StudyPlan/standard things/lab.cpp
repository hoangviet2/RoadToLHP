//  Created by Hoang Viet on 12/12/2020.
//

#include <stdio.h>
#include <iostream>
#include <cctype>
#include <ctime>
using namespace std;

int lab(int argc, const char * argv[]) {
    string a;
    int point;
    cout<<"Nhap day can tach: ";
    getline(cin,a);
    for (int i=0; i<=a.length(); i++) {
        if (isspace(a[i])) {
            cout<<a[i-1]<<endl;
        }
    }
    return 0;
}
int time() {
    int soGiay = time(0);
    cout << "Da co " << soGiay << " giay troi qua ke tu thoi diem 01/01/1970." << endl;
    return 0;
}
