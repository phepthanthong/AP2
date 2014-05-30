#include <iostream>
#include <string>
#include "Plastique.h"
#include "Date.h"
#include "util.h"
using namespace std;

Plastique::Plastique(string auteur, string titre, string sty,
		     int j, int m, int a, int val,
		     string possesseur, int jp, int mp, int ap)
  : Oeuvre(auteur,titre,sty,j,m,a,val),
    date_changer(jp,mp,ap)
{
  cout << "appel constructeur Plastique" <<endl;
  lePossesseur = possesseur;
}

Plastique::~Plastique()
{
  cout << "appel destructeur Plastique" << endl;
}

Plastique::Plastique(const Plastique &p):Oeuvre(p),
					 lePossesseur(p.lePossesseur)
{
  cout << "appel Constructeur par Copie" << endl;
}

string Plastique::toString() const
{
  string pla = "Affichage de Plastique : \n";
  pla += Oeuvre::toString();
  pla += "Mon possesseur       : " + lePossesseur +"\n";
  pla += "Date changee de main : " + date_changer.toString()+"\n";
  return pla;
}
