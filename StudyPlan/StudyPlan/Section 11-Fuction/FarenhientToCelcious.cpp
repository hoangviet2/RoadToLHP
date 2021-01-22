//
//  FarenhientToCelcious.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 30/12/2020.
//

#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----
double farenheit_to_celsius(double);
double farenheit_to_kelvin(double);

//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void temperature_conversion(double fahrenheit_temperature) {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    double kelvin_temperature = farenheit_to_kelvin(fahrenheit_temperature);
    double celsius_temperature = farenheit_to_celsius(fahrenheit_temperature);
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----
double farenheit_to_celsius(double fahrenheit_temperature){
    double celsius {};
    celsius = round((5.0/9.0)*(fahrenheit_temperature-32));
    return celsius;
}
double farenheit_to_kelvin(double fahrenheit_temperature){
    double kelvin {};
    kelvin = round((5.0/9.0)*(fahrenheit_temperature-32)+273);
    return kelvin;
}


