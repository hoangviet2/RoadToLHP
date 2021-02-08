//
//  Task_9.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 30/01/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main_hsg_2017_2(){
    int times_travel;
    int tickets_per_section;
    int price_per_tickets;
    int price_per_section;
    int result {0};
    ifstream Inp;
    ofstream Oup;
    Inp.open("Test.txt");
    Oup.open("Test_out.txt");
    Inp>>times_travel;
    Inp>>tickets_per_section;
    Inp>>price_per_tickets;
    Inp>>price_per_section;
    if (times_travel%tickets_per_section == 0){
        result += (times_travel/tickets_per_section)*price_per_section;
    }else{
        result += ((times_travel/tickets_per_section)*price_per_section)+((times_travel%tickets_per_section)*price_per_tickets);
    }
    cout<<times_travel<<endl
        <<tickets_per_section<<endl
        <<price_per_tickets<<endl
        <<price_per_section<<endl;
    cout<<result<<endl;
    Oup<<result;
    Inp.close();
    Oup.close();
    return 0;
}
