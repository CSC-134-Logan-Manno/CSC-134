/*
@author: Logan Manno
@date: 06-16-2026
@purpose: take three values and average them together and print into console
*/

#include <iostream>
using namespace std;

int main(){
    // enter number 1
    double num1;
    cout << "Enter the first number: ";
    cin >> num1;
    // enter number 2
    double num2;
    cout << "Enter the second number: ";
    cin >> num2;
    // enter number 3
    double num3;
    cout << "Enter the third number: ";
    cin >> num3;

    // calculate the average by adding together then divide by the amount
    double average = (num1 + num2 + num3) / 3; 

    // print the result to the console
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << endl;

    return 0;
}