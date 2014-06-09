#include "zoo.h"

Zoo::Zoo()
{
  cout << " == Constructeur par defaut: Zoo" << endl;
  nomZoo = "";
  adrZoo = "";
  phoneZoo = 0;
}

Zoo::Zoo(string nom, string adresse, int telephone)
{
  cout << " == Constructeur avec parametre: Zoo" << endl;
  nomZoo = nom;
  adrZoo = adresse;
  phoneZoo = telephone;
}

Zoo::~Zoo()
{
  cout << " == Destructeur: Zoo" << endl;
}

void Zoo::afficher()
{
  cout << "Nom du Zoo: " << nomZoo << endl;
  cout << "Adresse du Zoo: " << adrZoo << endl;
  cout << "Telephone: " << phoneZoo << endl;
}
