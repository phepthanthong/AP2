#include "ouvrier.h"
//#include "employe.h"

Ouvrier::Ouvrier()
{
  cout << " == Constructeur par defaut: Ouvrier" << endl;
  nomOuvrier = "";
  //numEmploye++;
  numOuvrier = numEmploye;
}

Ouvrier::~Ouvrier()
{
  cout << " == Destructeur: Ouvrier" << endl;
}

Ouvrier::Ouvrier(string nomO)
{
  cout << " == Constructeur avec parametre: Ouvrier" << endl;
  nomOuvrier = nomO;
  //numEmploye++;
  numOuvrier = numEmploye;
}

void Ouvrier::jeSuis()
{
  cout << "Nom de l'Ouvrier: " << nomOuvrier << endl;
  cout << "Son numero: " << numOuvrier << endl;
}
