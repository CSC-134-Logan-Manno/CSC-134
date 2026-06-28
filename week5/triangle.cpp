/*
@author: Logan Manno
@date: 06-24-2026
@purpose: write a code that calculates angle of a right triangle given the lengths of the two sides and outputs the angle in degrees and past into the console
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double base; // the length of the base of the triangle
    double height; // the length of the height of the triangle
    cout << "Enter the length of the base of the triangle: "; // prompt user to enter the length of the base of the triangle
    cin >> base; // take in the length of the base of the triangle entered by the user
    cout << "Enter the length of the height of the triangle: "; // prompt user to enter the length of the height of the triangle
    cin >> height; // take in the length of the height of the triangle entered by the user
    // calculate the length of the hypotenuse of the triangle using the Pythagorean theorem
    double hypotenuse = sqrt(pow(base, 2) + pow(height, 2)); // calculate the length of the hypotenuse of the triangle using the Pythagorean theorem
    // calculate the angle opposite the height using atan2 function
    double angle = atan2(height, base) * (180.0 / M_PI); // calculate the angle using atan2 function and convert to degrees
    cout << "The angle of the triangle is: " << angle << " degrees" << endl; // print to console the angle of the triangle
    if (fabs(angle - 53.13) < 0.01) { // check if the angle is approximately equal to 53.13 degrees
        cout << "This is a 3-4-5 triangle." << endl; // print to console that this is a 3-4-5 triangle
    }
    else {
        cout << "This is NOT a 3-4-5 triangle." << endl; // print to console that this is not a 3-4-5 triangle
    }
    return 0; // return 0 to indicate successful completion of the program
}