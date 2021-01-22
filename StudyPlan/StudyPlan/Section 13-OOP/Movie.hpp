//
//  Movie.hpp
//  StudyPlan
//
//  Created by Hoang Viet on 17/01/2021.
//

#ifndef Movie_hpp
#define Movie_hpp
#include <string>
#include <stdio.h>
using namespace std;
class Movie{
private:
    string movie_name;
    string movie_rate;
    int watched;
public:
    //constructor
    Movie(string name, string rate, int watched);
    //copy constructor
    Movie(const Movie &source);
    //destructor
    ~Movie();
    // set name and show name
    void set_name(string name) {this->movie_name = name;}
    string get_name() const {return movie_name;}
    // set rate and show rate
    void set_rate(string rate) {this->movie_rate = rate;}
    string get_rate() const {return movie_rate;}
    // set watch times and show it
    void set_watched(int watched) {this->watched = watched;}
    int get_watched() const {return watched;}
    //
    void increament_watched() {++watched;}
    void display() const;
};
#endif /* Movie_hpp */
