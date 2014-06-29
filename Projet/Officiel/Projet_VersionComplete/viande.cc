#include "viande.h"

Viande::Viande()
{
  calorieViande = 0;
  quantiteViande = 0;
  nomViande = "NULL";
}

Viande::~Viande(){}

void Viande::saisirViande()
{
  cout << " VEUILLEZ ENTRER LE NOM DE VIANDE: ";
  cin >> nomViande;
  cout << " CETTE VIANDE CONTIENT COMBIEN DE CALORIE ? ";
  enter_value(calorieViande);
  cout << " LE NOMBRE DE QUANTITE DE " << nomViande << " ? ";
  enter_value(quantiteViande);
}
void Viande::afficherInfoAliment()
{
  cout << "\tNom de l'Aliment: " << nomViande << endl;
  cout << "\tIl contient " << calorieViande << " calorie" << endl;
  cout << "\tQuantite: "<< quantiteViande << "kg" <<endl; 
}

int Viande::getQuantiteViande()
{
  return quantiteViande;
}
void Viande::importViande(int a)
{
  quantiteViande +=a;
}

void Viande::exportViande(int a)
{
  quantiteViande -=a;
}





