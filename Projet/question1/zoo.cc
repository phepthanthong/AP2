#include "zoo.h"

Zoo::Zoo()
{
  cout << " == Constructeur par defaut: Zoo" << endl;
  nomZoo = "NULL";
  adrZoo = "NULL";
  phoneZoo = 0;
}

Zoo::Zoo(string nom, string adresse, int telephone)
{
  cout << " == Constructeur avec parametre: Zoo" << endl;
  nomZoo = nom;
  adrZoo = adresse;
  phoneZoo = telephone;
}

Zoo::~Zoo()
{
  cout << " == Destructeur: Zoo" << endl;
}

Zoo::Zoo(const Zoo &c)
{
  nomZoo = c.nomZoo;
  adrZoo = c.adrZoo;
  phoneZoo = c.phoneZoo;
}

Zoo &Zoo::operator= (const Zoo &c)
{
  if (this != &c)
    {
      nomZoo = c.nomZoo;
      adrZoo = c.adrZoo;
      phoneZoo = c.phoneZoo;
    }

  return *this;
}
/*
string Zoo::jeSuis()
{
  ostringstream out;
  out << "Nom du Zoo: " << nomZoo 
      << "Son adresse: " << adrZoo 
      << "Son numero de telephone: " << phoneZoo << endl;
  return out.str();
  }*/

ostream & operator<<(ostream &os, const Zoo &zoo)
{
  os << " - Nom du Zoo: " << zoo.getNomZoo() << endl;
  os << " - Son adresse: " << zoo.getAdrZoo() << endl;
  os << " - Son numero de telephone: " << zoo.getPhoneZoo() << endl;
  return os;

  //os << ouv.jeSuis();
  //return os;
}
string Zoo::getNomZoo()const
{
  return nomZoo;
}
string Zoo::getAdrZoo()const
{
  return adrZoo;
}
int Zoo::getPhoneZoo()const
{
  return phoneZoo;
}
void Zoo::afficher()
{
  cout << "Nom du Zoo: " << nomZoo << endl;
  cout << "Adresse du Zoo: " << adrZoo << endl;
  cout << "Telephone: " << phoneZoo << endl;
}
