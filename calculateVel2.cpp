/*
@author: Logan Manno
@date: 2026-06-05
@description: calculate velocity given distance and time using equation d= v*t
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid typing std:: before every standard library object
using namespace std;

int main(){
    int distance = 400; // distance in miles
    int time = 4; // time in hours
    int velocity = distance / time; // velocity = distance / time
    cout << "The velocity is " << velocity << " miles per hour." << endl;
    return 0;
}