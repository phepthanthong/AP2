#include "viande.h"

Viande::Viande()
{
  cout << " == Constructeur par defaut: Viande" << endl;
  calorieViande = 0;
  nomViande = "NULL";
}

Viande::~Viande()
{
  cout << " == Destructeur: Viande" << endl;
}

Viande::Viande(string nomV, int calV)
{
  cout << " == Constructeur avec parametre: Viande" << endl;
  nomViande = nomV;
  calorieViande = calV;
}

void Viande::affiAliment()
{
  cout << "Nom de l'Aliment: " << nomViande << endl;
  cout << "Il contient " << calorieViande << " calorie" << endl;
}
