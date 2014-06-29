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

Viande::Viande(string nomV, int calV, float quantiteV)
{
  cout << " == Constructeur avec parametre: Viande" << endl;
  nomViande = nomV;
  calorieViande = calV;
  quantiteViande = quantiteV;
}

void Viande::affiAliment()
{
  cout << endl << "Nom de l'Aliment: " << nomViande << endl;
  cout << "Il contient " << calorieViande << " calorie" << endl;
  cout << "Quantite: " << quantiteViande << " kg" << endl;
}
float Viande::getQuantiteViande()
{
  return quantiteViande;
}
void Viande::stockerViande(float mass)
{
  quantiteViande += mass;
}
void Viande::destockerViande(float mass)
{
  quantiteViande -= mass;
}
