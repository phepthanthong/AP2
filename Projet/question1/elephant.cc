#include "elephant.h"
int Elephant::numElephant = 0;
Elephant::Elephant()
{
  cout << " == Constructeur par defaut: Elephant" << endl;
  nomElephant = "NULL";
  numElephant = numAnimal;
}

Elephant::Elephant(string nomL)
{
  cout << " == Constructeur avec parametre: Elephant" << endl;
  nomElephant = nomL;
  numElephant = numAnimal;
}
Elephant::~Elephant()
{
  cout << " == Destructeur: Elephant" << endl;
}

void Elephant::afficherA()
{
  cout << "C'est un animal de type Elephant" << endl;
  cout << "Nom de l'Animal: " << nomElephant << endl;
  cout << "Son numero: " << numElephant << endl;
  //cout << "Sa date de naissance: " << dateNais << endl;
}
