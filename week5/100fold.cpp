/*
@author: Logan Manno
@date: 06-26-2026
@purpose: write a code that while loops one hundred times and outputs the number of times it has looped into the console
*/


#include <iostream>
using namespace std;

int main(){
    int count = 1; // the loop starts at 1
    while (count <= 100){ // the loop will run as long as count is less than or equal to 100
        cout << "This is loop number: " << count << endl; // print to console the number of times the loop has run
        count++; // increase the count by 1
    }
}