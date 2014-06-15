#include "cage.h"
int Cage::numCage = 0;
Cage::Cage()
{
  cout << " == Constructeur par defaut: Cage" << endl;
  numCage++;
  taille = "NULL";
}

Cage::~Cage()
{
  cout << " == Destructeur: Cage" << endl;
}

Cage::Cage(string tailleC)
{
  cout << " == Constructeur avec parametre: Cage" << endl;
  numCage++;
  taille = tailleC;
}

Cage::Cage(const Cage &c)
{
  numCage = c.numCage;
  taille = c.taille;
}

Cage &Cage::operator= (const Cage &c)
{
  if (this != &c)
    {
      numCage = c.numCage;
      taille = c.taille;
    }
  return *this;
}

ostream & operator<<(ostream &os, const Cage &cage)
{
  os << " - Son numero: " << cage.getNumCage() << endl;
  os << " - Sa taille: " << cage.getTaille() << endl;
  return os;

  //os << ouv.jeSuis();
  //return os;
}

int Cage::getNumCage()const
{
  return numCage;
}

string Cage::getTaille()const
{
  return taille;
}

void Cage::saisieCage()
{
  cout << "numero de Cage ?" << endl;
  cin >> numCage;
  cout << "taille de Cage ?" << endl;
  cin >> taille;
}

void Cage::afficher()
{
  cout << "Numero de Cage: " << numCage << endl;
  cout << "Sa taille: " << taille << endl;
}
