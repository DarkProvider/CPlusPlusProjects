// Opdracht 2 - Vragen.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
using namespace std;

int main()
{
	
	float cijfer, input = 0;

	for (int i = 0; i <= 4; i++) {

		cout << "Wat voor cijfer heb je in de allerlaatste toets gehad? ";
		cin >> input;


		cijfer = input/5;


	}

	cout << "Gemiddelde cijfer is: " << cijfer << endl;

	return 0;
	system("pause");

}