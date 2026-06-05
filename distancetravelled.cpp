/*
@author: Logan Manno
@date: 2026-06-04
@description: calculate distance travelled given speed and time
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid typing std:: before every standard library object
using namespace std;

int main(){
    int velocity = 80; // speed in miles per hour
    int time = 2; // time in hours
    int distance = velocity * time; // distance = velocity * time
    cout << "The distance travelled is " << distance << " miles." << endl;
    return 0;
}


