/*
@author: Logan Manno
@date: 6-11-2026
@desctription: calculate the square footage of a house and paste into console
*/

#include <iostream>
using namespace std;
#include <cmath>

int main(){
    double length = 50.0; // length of the house in feet
    double width = 32.0; // width of the house in feet
    double squareFootage = length * width; // calculate the square footage
    cout << "The square footage of the house is: " << squareFootage << " square feet" << endl;
    return 0;
}