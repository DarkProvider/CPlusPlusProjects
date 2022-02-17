#include <iostream>

using namespace std;

int getal1, getal2;


void menu()
{


    cout << "Vul in 2 getalen om ze met elkaar te vergelijken \n" << endl;

    cout << "Vul AUB het eerste getal in: \n" << endl;

    cin >> getal1;

    cout << "\nVul AUB het tweede getal in: \n" << endl;

    cin >> getal2;

}

int main() {

        for (;;) {

            menu();

            if (getal1 > getal2)
            {
                cout << "\nGetal " << getal1 << " AKA getal 1" << " is groter dan het getal " << getal2 << " AKA getal 2 \n" <<  endl;

            } else if (getal1 = getal2) {

                cout << "\nGetal " << getal1 << " AKA getal 1" << " is gelijk aan het getal " << getal2 << " AKA getal 2 \n" <<  endl;

            } else {

                cout << "\nGetal " << getal1 << " AKA getal 1" << " is kleiner dan het getal " << getal2 << " AKA getal 2 \n" << endl;

            }

            system("pause");
        }

}

