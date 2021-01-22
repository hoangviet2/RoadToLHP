//
//  Movie.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 17/01/2021.
//
#include <iostream>
#include "Movie.hpp"
using namespace std;
Movie::Movie(string name, string rate, int watched)
    :movie_name{name},movie_rate{rate},watched{watched}{
}
Movie::Movie(const Movie &source)
    :Movie(source.movie_name,source.movie_rate,source.watched){
    
}
Movie::~Movie(){
    cout<<"Destructor called";
}
void Movie::display() const{
    cout<<"Movie's name: "<<movie_name<<" Movie's rate: "<<movie_rate<<" watched times: "<<watched;
}
