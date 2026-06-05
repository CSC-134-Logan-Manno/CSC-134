/* 
@author: Logan Manno
@date: 2026-06-05
@description: calculate voltage given current and resistance using equation V= I*R
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid typing std:: before every standard library object
using namespace std;

int main(){
    int current = 10; // current in amperes
    int resistance = 2; // resistance in ohms
    int voltage = current * resistance; // voltage = current * resistance
    cout << "The voltage is " << voltage << " volts." << endl;
    return 0;
}