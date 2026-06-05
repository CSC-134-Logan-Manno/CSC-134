/* 
@author: Logan Manno
@date: 2026-06-05
@description: calculate force given mass and acceleration using equation F= m*a when m = 10 and a = 9.81
*/

//include the iostream library for input and output
#include <iostream>
#include <cmath>
//use the standard namespace to avoid typing std:: before every standard library object
using namespace std;

int main(){
    int mass = 10; // mass in kilograms
    double acceleration = 9.81; // acceleration in meters per second squared
    double force = mass * acceleration; // force = mass * acceleration
    cout << "The force is " << force << " newtons." << endl;
    return 0;
}