//
//  stringudemy.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 24/12/2020.
//

#include <iostream>
#include <string>
using namespace std;

int characters() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    char first_name[50] {"Bjarne"};
    char last_name[50] {"Stroustrup"};
    char whole_name[100] {};
    int first_name_length = strlen(first_name);
    int last_name_length = strlen(last_name);
    strcpy(whole_name,first_name);
    strcat(whole_name, last_name);
    int whole_name_length = strlen(whole_name);
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
    return  0;
}
