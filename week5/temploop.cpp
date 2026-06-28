/*
@author: Logan Manno
@date: 06-22-2026
@purpose: to write a while loop that runs till you enter a certain temperature and past it into the console
*/

#include <iostream>
using namespace std;

int main(){
    double temp; // the temperature entered by the user
    cout << "Enter a temperature: "; // prompt user to enter a temperature
    cin >> temp; // take in the temperature entered by the user
    // compare numeric values (not strings). use a float literal for the target
    while (temp != 212.34){ // the loop will run as long as the temperature entered is not equal to 212.34
        cout << "Enter a temperature: "; // prompt user to enter a temperature
        cin >> temp; // take in the temperature entered by the user
        // repeat the loop with the new temperature entered until the temperature entered is equal to 212.34
    }
    cout << "The temperature has been successfully set, thank you " << endl; // print to console the temperature entered
    return 0;
}