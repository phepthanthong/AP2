#include "legume.h"

Legume::Legume()
{
  calorieLegume = 0;
  nomLegume = "NULL";
}
Legume::~Legume(){}
void Legume::saisirLegume()
{
  cout << " VEUILLEZ ENTRER LE NOM DE LEGUME: ";
  cin >> nomLegume;
  cout << " CETTE VIANDE CONTIENT COMBIEN DE CALORIE ? ";
  do{
    scanf("%d", &calorieLegume);
    if (calorieLegume== 0) 
      cout << " INVALIDE: VEUILLEZ ENTRER ENCORE UNE FOIS";
    cin.ignore();
  }while (calorieLegume == 0);
  cout << " LE NOMBRE DE QUANTITE DE " << nomLegume << " ? ";
  do{
    scanf("%d", &quantiteLegume);
    if (quantiteLegume == 0) 
      cout << " INVALIDE: VEUILLEZ ENTRER ENCORE UNE FOIS";
    cin.ignore();
  }while (quantiteLegume == 0);
}

void Legume::afficherInfoAliment()
{
  cout << "\tNom de l'Aliment: " << nomLegume << endl;
  cout << "\tIl contient " << calorieLegume << " calorie" << endl;
  cout << "\tQuantite: "<< quantiteLegume << "kg" <<endl; 
}

int Legume::getQuantiteLegume()
{
  return quantiteLegume;
}
void Legume::importLegume(int a)
{
  quantiteLegume +=a;
}
void Legume::exportLegume(int a)
{
  quantiteLegume -=a;
}
