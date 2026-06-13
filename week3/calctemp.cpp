/*  
@author: Logan Manno
@date: 6-09-2026
@description: calculate temperate change of three different cities 
*/

#include <iostream>
using namespace std; 

int main(){
    double newyork = 85.0; // Temperature in new york in july
    double denver = 88.0; // Temperature in denver in july
    double phoenix = 106.0; // Temperature in phoenix in july
    double number = 1.2; // change in temperature
    newyork = newyork * number; // change in temperature for new york
    denver = denver * number; // change in temperature for denver
    phoenix = phoenix * number; // change in temperature for phoenix
    std::cout << "The new temperature in New York is: " << newyork << " degrees Fahrenheit" << std::endl;
    std::cout << "The new temperature in Denver is: " << denver << " degrees Fahrenheit" << std::endl;
    std::cout << "The new temperature in Phoenix is: " << phoenix << " degrees Fahrenheit" << std::endl;

    return 0;
}