/*
@author: Logan Manno
@date: 06-17-2026
@purpose: uses average program to paste the result into a formula to get a grade and paste to console
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

    // determine the grade using if statements
    char grade;
    if (average < 90) { // checks if grade is less than 90 to be a B or lower
        if (average < 80) { // checks if grade is less than 80 to be a C or lower
            if (average < 70) { // checks if grade is less than 70 to be a D or lower
                if (average < 60) { // checks if grade is less than 60 to be an F
                    grade = 'F'; // if grade is less than 60, assign F
                }
                else {
                    grade = 'D'; // if grade between 70 and 60 to assign D
                }
            }
            else {
                grade = 'C'; // if grade between 80 and 70 assign C
            }
        }
        else {
            grade = 'B'; // if grade between 90 and 80 assign B
        }
    }
    else {
        grade = 'A'; // if grade is between 100 and 90 assign A (over 100 also gets A assigned)
    }

    // print the result to the console
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << endl;
    cout << "The letter grade is: " << grade << endl;

    return 0;
}