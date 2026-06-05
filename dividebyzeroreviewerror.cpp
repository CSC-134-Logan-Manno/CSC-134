/*  
@author: Logan Manno
@date: 2026-06-01
@description: this program demonstrates a divide by zero and then calculating the error
*/

//include the iostream library for input and output
#include <iostream> 
//use the standard namespace to avoid typing std:: before every standard library object
using namespace std;

int main(){
    int number1 = 10;
    int quotient = number1 / 0; // This will cause a divide by zero error
    cout << "The quotient of " << number1 << " divided by zero is: " << quotient << endl; // This line will not be executed due to the error
    return 0;
}


