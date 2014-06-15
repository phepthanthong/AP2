#include "legume.h"

Legume::Legume()
{
  cout << " == Constructeur par defaut: Legume" << endl;
  calorieLegume = 0;
  nomLegume = "NULL";
}

Legume::~Legume()
{
  cout << " == Destructeur: Legume" << endl;
}

Legume::Legume(string nomLeg, int calLeg)
{
  cout << " == Constructeur avec parametre: Legume" << endl;
  nomLegume = nomLeg;
  calorieLegume = calLeg;
}

void Legume::affiAliment()
{
  cout << "Nom de l'Aliment: " << nomLegume << endl;
  cout << "Il contient " << calorieLegume << " calorie" << endl;
}
