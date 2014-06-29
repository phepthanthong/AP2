#include "zoo.h"

Zoo::Zoo()
{
  cout << " == Constructeur par defaut: Zoo" << endl;
  nomZoo = "NULL";
  adrZoo = "NULL";
  phoneZoo = "NULL";
}



Zoo::~Zoo()
{
  cout << " == Destructeur: Zoo" << endl;
}

int Zoo::compterAnimaux(list <Animal> ani) { return (ani.size());}

void Zoo::initialiseZoo()
{
  cout << " VEUILLEZ ENTRER LE NOM DU ZOO: ";
  getline (cin,nomZoo);
  cout <<endl;
  cout << " QUEL EST SON ADRESSE ? ";
  getline (cin, adrZoo);
  cout << endl;
  cout << " QUEL EST SON NUMERO DE TELEPHONE ? ";
  getline (cin, phoneZoo);
  cout << endl;
}

void Zoo::showZoo()
{
  cout << "NOM DU ZOO: " << nomZoo << endl;
  cout << "SON ADRESSE: " <<adrZoo << endl;
  cout << "SON NUMERO DE TELEPHONE: " << phoneZoo << endl;
}
