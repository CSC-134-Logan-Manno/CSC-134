/*
@author: Logan Manno
@date: 6-11-2026
@purpose: add two floating point numbers together and print the result to the console
*/

//include the directives for the libraries we will be using
#include <iostream>
using namespace std;

int main(){
    float num1;
    float num2;
    cout << "enter the first number: ";
    cin >> num1;
    cout << "enter the second number: ";
    cin >> num2;
    cout << "the sum of the two numbers is: " << num1 + num2 << endl;
    return 0;
}