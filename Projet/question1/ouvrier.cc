#include "ouvrier.h"
#include <sstream>
Ouvrier::Ouvrier()
{
  cout << " == Constructeur par defaut: Ouvrier" << endl;
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

string Ouvrier::getNomOuvrier()const
{
  return nomOuvrier;
}
int Ouvrier::getNumOuvrier()const
{
  return numOuvrier;
}
/*
string Ouvrier::jeSuis()
{
  ostringstream out;
  out << "Nom de l'Ouvrier: " << nomOuvrier 
      << "Son numero: " << numOuvrier 
      << "Je m'occupe la cage numero: " << cage->getNumCage() << endl;
  return out.str();
}

ostream & operator<<(ostream &os, const Ouvrier &ouv)
{
  os << "Nom de l'Ouvrier: " << ouv.getNomOuvrier() << endl;
  os << "Son numero: " << ouv.getNumOuvrier() << endl;
  return os;

  os << ouv.jeSuis();
  return os;
}
*/
void Ouvrier::jeSuis()
{
  cout << "Nom de l'Ouvrier: " << nomOuvrier << endl;
  cout << "Son numero: " << numOuvrier << endl;
}
