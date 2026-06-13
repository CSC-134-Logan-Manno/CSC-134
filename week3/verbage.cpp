/*
@author: Logan Manno
@date: 6-12-2026
@purpose: write a simple program to print a message to the console
*/

#include <iostream>
using namespace std;

int main(){
    string verbage = "Today I am"; // variable to store the first part of the message
    string age = "25"; // variable to store the age
    string verbage_end = "years old!"; // variable to store the last part of the message
    cout << verbage << " " << age << " " << verbage_end << endl; // print the message to the console
    return 0;
}