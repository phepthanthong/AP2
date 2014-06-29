#include "tigre.h"

int Tigre::numTigre = 0;
Tigre::Tigre()
{
  cout << " == Constructeur par defaut: Tigre" << endl;
  nomTigre = "NULL";
  numTigre = numAnimal;
}

Tigre::Tigre(string nomT)
{
  cout << " == Constructeur avec parametre: Tigre" << endl;
  nomTigre = nomT;
  numTigre = numAnimal;
}

Tigre::~Tigre()
{
  cout << " == Destructeur: Tigre" << endl;
}
void Tigre::afficherA()
{
  cout << "C'est un animal de type Tigre" << endl;
  cout << "Nom de l'Animal: " << nomTigre << endl;
  cout << "Son numero: " << numTigre << endl;
  //cout << "Sa date de naissance: " << dateNais << endl;
}
