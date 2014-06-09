#include "employe.h"
int Employe::numEmploye = 0;
Employe::Employe()
{
  cout << " == Contructeur par Defaut: Employe" << endl;
  nomEmploye = "";
  metier = "";
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

void Employe::jeSuis()
{
  cout << "Nom de l'Employe: " << nomEmploye << endl;
  cout << "Son numero: " << numcode << endl;
  cout << "Son metier: " << metier << endl;
}
