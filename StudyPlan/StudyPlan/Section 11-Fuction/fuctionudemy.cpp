//
//  fuctionudemy.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 30/12/2020.
//

#include "fuctionudemy.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace fuction;
using namespace std;
void myfuction::randomfuction (){
    int random_numbers {};
    size_t count {10}; //numbers of random numbers do you want
    int min {1}; //lowest value
    int max {6}; //biggest value
    std::cout << "max random on my system is: "<< RAND_MAX<<std::endl;
    srand(time(nullptr));
    for (size_t i{1}; i<=count; ++i) {
        random_numbers = rand() % max + min;
        cout<<random_numbers<<endl;
    }
    cout<<endl;
}
