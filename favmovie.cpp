/*
@author: Logan Manno
@date: 2026-06-04
@description: take favorite movie and main character and print the result
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string introduction = "My favorite movie is:";
    string favorite_movie = "The Matrix";
    string Neo = "Neo";
    string Morpheus = "Morpheus";
    string Trinity = "Trinity";
    string Agent_Smith = "Agent Smith";
    string Keanu_Reeves = "Keanu Reeves";
    string Laurence_Fishburne = "Laurence Fishburne";
    string Carrie_Anne_Moss = "Carrie-Anne Moss";
    string Hugo_Weaving = "Hugo Weaving";
    string character = "Main character:";
    cout << introduction << endl;
    cout << favorite_movie << endl; 
    cout << character << endl;
    cout << Neo << ", actor " << Keanu_Reeves << endl;
    cout << Morpheus << ", actor " << Laurence_Fishburne << endl;
    cout << Trinity << ", actor " << Carrie_Anne_Moss << endl;
    cout << Agent_Smith << ", actor " << Hugo_Weaving << endl;
    return 0;
}