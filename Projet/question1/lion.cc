#include "lion.h"
int Lion::numLion = 0;
Lion::Lion()
{
  cout << " == Constructeur par defaut: Lion" << endl;
  nomLion = "NULL";
  numLion = numAnimal;
}

Lion::Lion(string nomL)
{
  cout << " == Constructeur avec parametre: Lion" << endl;
  nomLion = nomL;
  numLion = numAnimal;
}
Lion::~Lion()
{
  cout << " == Destructeur: Lion" << endl;
}

void Lion::afficherA()
{
  cout << "C'est un animal de type Lion" << endl;
  cout << "Nom de l'Animal: " << nomLion << endl;
  cout << "Son numero: " << numLion << endl;
  //cout << "Sa date de naissance: " << dateNais << endl;
}
