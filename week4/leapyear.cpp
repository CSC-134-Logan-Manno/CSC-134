/*
@author: Logan Manno
@date: 6-15-2026
@purpose: this program determines if a year is a leap year and prints the result to the console
*/

// include iostream library
#include <iostream>
// use namespce std
using namespace std;

int main(){
    // enter a year
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // determine if the year is a leap year
    if (year % 4 == 0) { // first check, checks if divisible by 4 to show a leap year
        if (year % 100 == 0) { // second check, checks if not a leap year
            if (year % 400 == 0) { // final check, checks if a leap year
                cout << year << " is a leap year." << endl;
            }
            else {
                cout << year << " is not a leap year." << endl;
            }
        }
        else {
            cout << year << " is a leap year." << endl;
        }
    }
    else {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}