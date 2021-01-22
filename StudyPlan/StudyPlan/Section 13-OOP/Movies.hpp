//
//  Movies.hpp
//  StudyPlan
//
//  Created by Hoang Viet on 17/01/2021.
//

#ifndef Movies_hpp
#define Movies_hpp
#include <iostream>
#include <stdio.h>
#include "Movie.hpp"
#include <string>
#include <vector>
using namespace std;
class Movies{
private:
    vector<Movie> movies;
public:
    Movies();//constructor
    ~Movies();//destructor
    // function
    bool addmovie (string name,string rate,int watched);
    bool increament_watched (string name);
    void display()const;
};
#endif /* Movies_hpp */
