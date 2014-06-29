#include "lion.h"
int Lion::numLion = 0;
Lion::Lion()
{
  cout << " == Constructeur par defaut: Lion" << endl;
  nomLion = "NULL";
  numLion = numAnimal;
}

Lion::Lion(string nomL, int quantiteL)
{
  cout << " == Constructeur avec parametre: Lion" << endl;
  nomLion = nomL;
  numLion = numAnimal;
  quantiteLion = quantiteL;
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
string Lion::getNomLion()const
{
  return nomLion;
}
int Lion::getNumeroLion()const
{
  return numLion;
}
int Lion::getQuantiteLion()const
{
  return quantiteLion;
}
