/*
@author: Logan Manno
@date: 06-15-2026
@purpose: this program determines if a letter is a vowel or a constant and outputs the result to the console
*/

#include <iostream>
using namespace std;



int main(){
    // enter a letter
    char letter;
    bool isNumber = false;
    cout << "Enter a letter: ";
    cin >> letter;
    if (letter >= '0' && letter <= '9') {
        isNumber = true;
        if (isNumber) {
            cout << letter << " is not a letter." << endl;
        }
    }
    else if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y' ||
             letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'Y') {
        cout << letter << " is a vowel." << endl;
    }
    else {
        cout << letter << " is a constant." << endl;
    }
    return 0;
}