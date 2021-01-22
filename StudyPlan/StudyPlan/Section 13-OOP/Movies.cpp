//
//  Movies.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 17/01/2021.
//

#include "Movies.hpp"
#include "Movie.hpp"
#include <vector>
bool Movies::addmovie(string name, string rate, int watched){
    Movie movie_temp (name,rate,watched);
    if (increament_watched(name)){
        movies.push_back(movie_temp);
        cout<<"Movie: "<<movie_temp.get_name()<<" has been added"<<endl;
    }else{
        cout<<"already exist"<<endl;
    }
    return false;
}
bool Movies::increament_watched(string name){
    for (auto items:movies){
        if (name == items.get_name()) {
            items.set_watched(items.get_watched()+1);
            return true;
        }
    }
    return false;
}
void Movies::display()const{
    if(movies.size()!=0){
        for (auto items:movies) {
            cout<<"==========="<<endl;
            cout<<items.get_name()<<" , "<<items.get_rate()<<" , "<<items.get_watched()<<endl;
            cout<<"==========="<<endl;
        }
    }else{
        cout<<"Sorry, no movies to display"<<endl;
    }
}
