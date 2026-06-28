/*
@author: Logan Manno
@date: 06-22-2026
@purpose: write a while-loop that takes ten grades and finds the average to plug into console
*/

#include <iostream>
using namespace std;

int main(){
    float grade; // first grade entered
    cout << "Enter a grade: ";
    cin >> grade;
    float sum = grade; // sum of all grades, starts with first grade entered
    float count = 1; // counts the number of grades entered, starts at 1
    while (count < 10){ // the loop will run as long as count is less than 10
       cout << "enter a grade: "; // prompt user to enter a grade
       cin >> grade; // take in the grade entered by the user
       // start over the loop with the new grade entered, add the new grade to the sum of all grades, and increase the count by 1
       sum += grade; // add the new grade to the sum of all grades
       count++; // increase the count by 1
       
}
    // calculate and display average
    double average = static_cast<double>(sum) / count;
    cout << "Average grade is: " << average << endl;
    return 0;
}