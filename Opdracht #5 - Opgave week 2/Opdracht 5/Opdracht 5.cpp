// Opdracht 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int select_option = 0;
float balance = 0, storten_bedrag, opnemen_bedrag, resterende_bedrag;

void menu() {

    system("cls");

    cout << "Uw huidige saldo is: " << "€" << balance;

    cout << "\n \n";

    cout << "Kies uit de volgende AUB: " << endl << "\n";

    cout << "1. Geld storten \n2. Geld opnemen" << endl << "\n";

    cin >> select_option;

    cout << "\n";

}

void storten() {

    cout << "Hoeveel wilt u storten? \n\n";

    cin >> storten_bedrag;

    cout << "\n";

    balance = balance + storten_bedrag;
    resterende_bedrag = balance;

    system("cls");

    cout << "Uw resterende saldo is: " << "€" << resterende_bedrag << endl << "\n";

    cout << "Wilt u terug gaan naar het hoofdmenu? \n\n";

}

void opnemen() {

    cout << "Hoeveel wilt u opnemen? \n\n";

    cin >> opnemen_bedrag;

    cout << "\n";

    balance = balance - opnemen_bedrag;
    resterende_bedrag = balance;

    system("cls");

    cout << "Uw resterende saldo is: " << "€" << resterende_bedrag << endl << "\n";

    cout << "Wilt u terug gaan naar het hoofdmenu? \n\n";

}

int main() {

    menu();

    for (;;) {

        switch (select_option) {

        case 1:

            storten();

            system("pause");

            menu();

            break;

        case 2:

            opnemen();

            system("pause");

            menu();

            break;

        }
    }
}