#include <iostream>
#include <string>
#include "Ecrite.h"
#include "Date.h"
#include "util.h"
#include "Livre.h"
using namespace std;

Livre::Livre(string auteur, string titre, string sty,
	     int j, int m, int a, int val,
	     string theme, string langue, int j_p, int m_p, int a_p,
	     string editeur, int j_l, int m_l, int a_l)
  :Ecrite(auteur,titre,sty,j,m,a,val,theme,langue,j_p,m_p,a_p),
   date_edition(j_l,m_l,a_l)
{ // appel constructeur de Ecrite ET Date
  cout << "appel constructeur Livre " << endl;
  editeur_l = editeur;
  // pas besoin de modifier date_edition
}

Livre::~Livre()
{
  cout << "appel destructeur Livre" << endl;
}

Livre::Livre(const Livre &l):Ecrite(l),
			     editeur_l(l.editeur_l)
{
  cout << "appel Contructeur par Copie" << endl;
  //my_date_creation = l.my_date_creation;
}

string Livre::toString() const
{
  string liv = "Affichage de Livre : \n";
  liv += Ecrite::toString();
  liv += "Editeur    : " + editeur_l+"\n";
  liv += "Edite le   : " + date_edition.toString()+"\n";
  return liv;
}
