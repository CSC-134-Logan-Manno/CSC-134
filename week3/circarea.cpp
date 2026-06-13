/*
@author: Logan Manno
@date: 6-11-2026
@purpose: to write a code that calculates the area of a circle and print the result to the console using floating point variables
*/

#include <iostream>
using namespace std;
#include <cmath>

int main(){
    float radius = 19; // variable to store the radius of the circle
    float pi = 3.1415;
    float area = pi * (radius * radius); // calculate the area of the circle using the formula A = πr^2
    cout << "the area of the circle is: " << area << " square units" << endl; // print the result to the console
    return 0;
}