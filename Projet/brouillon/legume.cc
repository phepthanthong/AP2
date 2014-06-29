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

Legume::Legume(string nomLeg, int calLeg, float quantite)
{
  cout << " == Constructeur avec parametre: Legume" << endl;
  nomLegume = nomLeg;
  calorieLegume = calLeg;
  quantiteLegume = quantite;
}

void Legume::affiAliment()
{
  cout << endl << "Nom de l'Aliment: " << nomLegume << endl;
  cout << "Il contient " << calorieLegume << " calorie" << endl;
  cout << "Quantite: " << quantiteLegume << " kg" << endl;
}
float Legume::getQuantiteLegume()
{
  return quantiteLegume;
}
void Legume::stockerLegume(float mass)
{
  quantiteLegume += mass;
}
void Legume::destockerLegume(float mass)
{
  quantiteLegume -= mass;
}
