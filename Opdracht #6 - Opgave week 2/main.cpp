#include <iostream>

using namespace std;


int main()

{

  int aq1 = 8, aq2 = 11, temp;   // dit is aquarium 1




  cout << "Inhoud aquarium1 = " << aq1 << endl;   //hier tonen we de inhoud op het scherm

  cout << "Inhoud aquarium2 = " << aq2 << endl;

  cout << "\nNu gaan we de wissel uitvoeren: \n" << endl ;

  //hieronder schrijf jij de code voor de wissel


  temp = aq1;
  aq1 = aq2;
  aq2 = temp;



  //we tonen nu opnieuw de inhoud van de aquariums, dus na de wissel

  cout << "Inhoud aquarium1 = " << aq1 << endl;

  cout << "Inhoud aquarium2 = " << aq2 << endl;


cin.ignore();

getchar();

return 0;

}
