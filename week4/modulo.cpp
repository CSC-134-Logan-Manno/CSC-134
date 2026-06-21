/*
@author: Logan Manno
@date: 06-17-2026
@purpose: enter integer and determine if even or odd with modulo operator and print result to console
*/

#include <iostream>
using namespace std;

int main(){
    // enter an integer
    int num1; // integer being checked if even or odd
    cout << "Enter an integer: ";
    cin >> num1;
    int divisor = 2; // 2 is chosen since a even number can equally be split into two groups without any remaining

    // determine if the number is even or odd using modulo operator
    if (num1 % 2 == 0) { // checks if num1 is divisible by 2 with no remainder to determine if even
        cout << num1 << " is even." << endl;
        
    }
    else {
        cout << num1 << " is odd." << endl; // if num1 is not divisible by 2 with no remainder, then it is odd
    }
    return 0;
}