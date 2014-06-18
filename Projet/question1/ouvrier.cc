#include "ouvrier.h"

Ouvrier::Ouvrier()
{
  cout << " == Constructeur par Defaut: Ouvrier" << endl;
  nomOuvrier = "NULL";
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

Ouvrier::Ouvrier(const Ouvrier &o)
{
  numOuvrier = o.numOuvrier;
  nomOuvrier = o.nomOuvrier;
}

Ouvrier &Ouvrier::operator= (const Ouvrier &o)
{
  if (this != &o)
    {
      numOuvrier = o.numOuvrier;
      nomOuvrier = o.nomOuvrier;
    }
  return *this;
}

ostream & operator<<(ostream &os, const Ouvrier &ouv)
{
  os << " - Nom de l'Ouvrier: " << ouv.getNomOuvrier() << endl;
  os << " - Son numero: " << ouv.getNumOuvrier() << endl;
  return os;
}

string Ouvrier::getNomOuvrier()const
{
  return nomOuvrier;
}
int Ouvrier::getNumOuvrier()const
{
  return numOuvrier;
}

void Ouvrier::jeSuis()
{
  cout << "Nom de l'Ouvrier: " << nomOuvrier << endl;
  cout << "Son numero: " << numOuvrier << endl;
}
