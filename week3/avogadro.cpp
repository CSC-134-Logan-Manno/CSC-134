/*
@author: Logan Manno
@date: 6-12-2026
@purpose: write avogadro's number in e notation and print the result to the console using floating point variables
*/

#include <iostream>
using namespace std;

int main(){
    float avogadro = 6.02214076; 
    char e = 101; // character code for e
    int num1 = 23; // exponent for e notation
    cout << "avogadro's number is: " << avogadro << e << num1 << endl; // print the result to the console
    return 0;
}