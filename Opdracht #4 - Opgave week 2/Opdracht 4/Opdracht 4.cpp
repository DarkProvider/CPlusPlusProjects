// Opdracht 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    float breedte, hoogte, totaal;

    cout << "Om de oppervlakte te kunnen brkenen, moet je de lengte en breedte van het object hieronder aangeven. " << "\n" << endl;

    cout << "\n";

    cout << "Wat is de hoogte van het object" << "\n" << endl;

    cin >> hoogte;

    cout << "\n";

    cout << "Wat is de lengte van het object" << "\n" << endl;

    cin >> breedte;

    cout << "\n";

    totaal = hoogte * breedte; 

    cout << "De oppervlakte van het object is " << totaal << "\n \n";

    system("pause");
}

