#include <iostream>

using namespace std;

int main() {

    int aantal, voorraad = 20;


    for (;;) {

        do {

            cout << "\nHoeveel dropjes wil je nemen? \n" << endl;

            cin >> aantal;


            if (voorraad < 1) {

                cout << "\nHet potje is leeg!" << "Want het voorraad is " << voorraad;

                continue;

            } else if (aantal > voorraad) {

                cout << "\nHet ingevoerde aantal is groter dan " << voorraad << endl;

                continue;

            } else {

                voorraad = voorraad - aantal;

            }

            cout << "\nJe hebt " << aantal << " dropjes gepakt!\n" << endl;


            cout << "\nHet aantal resterende dropjes is: " << voorraad << endl;



        } while (voorraad < 20);

    }


}
