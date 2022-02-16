// Opdracht 2 - Vragen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int input;
	int result = 0;

	for (int i = 0; i <= 4; i++) {

		cout << "Hoeveel broodjes heb je vandaag meegenomen ? ";
		cin >> input;
		


		result += input;


	}


	cout << "Totaal is: " << result << endl;

	return 0;
	system("pause");

}
