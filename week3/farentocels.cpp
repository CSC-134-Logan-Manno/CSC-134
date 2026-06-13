/*
@author: Logan Manno
@date: 6-11-2026
@description: write a code that converts fahrenheit to celsius and print the result to the console using floating point variables
*/

#include <iostream>
using namespace std;

int main(){
    float fahrenheit; // variable to store the temperature in fahrenheit
    cout << "enter the temperature in fahrenheit: ";
    cin >> fahrenheit; // get the temperature from the user
    float celsius = (fahrenheit - 32) * 5.0 / 9.0; // convert fahrenheit to celsius
    cout << "the temperature in celsius is: " << celsius << " degrees Celsius" << endl; // print the result to the console
    return 0;
}