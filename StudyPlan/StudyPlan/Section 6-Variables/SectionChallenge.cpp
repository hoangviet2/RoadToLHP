//
//  SectionChallenge.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 01/01/2021.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int section6(){
    const double tax {6.6};
    const int price_per_smallroom {25};
    const int price_per_largeroom {35};
    const int vaild_estimate_day {30};
    int number_of_smallroom {};
    int number_of_largeroom {};
    double total_estimate {};
    int cost {};
    cout<<"Hello, welcome to Ben's Carpet Cleaning Service "<<endl;
    cout<<endl;
    cout<<"How many small room would you like cleaned? ";
    cin>>number_of_smallroom;
    cout<<"How many large room would you like cleaned? ";
    cin>>number_of_largeroom;
    cout<<endl;
    cost = (number_of_smallroom*price_per_smallroom)+(number_of_largeroom*price_per_largeroom);
    total_estimate = cost+tax;
    cout<<"Estimate for carpet cleaning service "<<endl;
    cout<<"Number of small room: "<<number_of_smallroom<<endl;
    cout<<"Number of large room: "<<number_of_largeroom<<endl;
    cout<<"Price per small room: $"<<price_per_smallroom<<endl;
    cout<<"Price per large room: $"<<price_per_largeroom<<endl;
    cout<<"Cost: $"<<cost<<endl;
    cout<<"Tax: $"<<tax<<endl;
    cout<<"=========================="<<endl;
    cout<<"Total estimate: $"<<total_estimate<<endl;
    cout<<"This estimate is valid for "<<vaild_estimate_day<<" days"<<endl;
    return 0;
}
