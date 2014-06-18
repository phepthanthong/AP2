#include "employe.h"
#include <sstream>
int Employe::numEmploye = 0;
Employe::Employe()
{
  cout << " == Constructeur par Defaut: Employe" << endl;
  nomEmploye = "NULL";
  metier = "NULL";
  numEmploye++;
  numcode = numEmploye;
}

Employe::~Employe()
{
  cout << " == Destructeur: Employe" << endl;
}

Employe::Employe(string nom, string leMetier)
{
  cout << " == Constructeur avec parametre: Employe" << endl;
  nomEmploye = nom;
  numEmploye++;
  numcode = numEmploye;
  metier = leMetier;
}
string Employe::getNomEmploye()const
{
  return nomEmploye;
}
int Employe::getNumEmploye()const
{
  return numcode;
}
/*
string Employe::jeSuis()
{
  ostringstream output;
  output << "Nom de l'Employe: " << nomEmploye 
	 << "Son numero: " << numcode 
	 << "Son metier: " << metier << endl;
  return output.str();
}
ostream & operator<<(ostream &os, const Employe &emp)
{
  
  os << "Nom de l'Employe: " << emp.getNomEmploye() << endl;
  os << "Son numero: " << emp.getNumEmploye() << endl;
  return os;
  //os << emp.jeSuis();
  return os;
  }*/
void Employe::jeSuis()
{
  cout << "Nom de l'Employe: " << nomEmploye << endl;
  cout << "Son numero: " << numcode << endl;
  cout << "Son metier: " << metier << endl;
}
