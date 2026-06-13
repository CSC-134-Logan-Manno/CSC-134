/*
@author: Logan Manno
@date: 6-12-26
@purpose: to write a code that calculates the volume of a sphere and print the result to the console using floating point variables
*/

#include <iostream>
using namespace std;
#include <cmath>

int main(){
    float radius = 7; // variable to store the radius of the sphere
    float pi = 3.1415;
    float volume = (4.0 / 3.0) * pi * (radius * radius * radius);
    cout << "the volume of the sphere is: " << volume << " cubic units" << endl; // print the result to the console
    return 0;
}