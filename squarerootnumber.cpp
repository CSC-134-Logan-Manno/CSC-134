/*
@author: Logan Manno
@date: 2026-06-04
@description: take square root of real number and print the result
*/

//include the iostream library for input and output
#include <iostream>
#include <cmath> 
//use the standard namespace to avoid typing std:: before every standard library object
using namespace std;


int main(){
    int number1 =16;
    double result = sqrt(number1); // Calculate the square root of the number
    cout << "The square root of " << number1 << " is: " << result << endl;
    return 0;
}


