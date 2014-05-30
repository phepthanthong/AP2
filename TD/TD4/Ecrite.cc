#include <iostream>
#include <string>
#include "Ecrite.h"
#include "Date.h"
#include "util.h"
using namespace std;

Ecrite::Ecrite(string auteur, string titre, string sty,
	       int j, int m, int a, int val,
	       string theme, string langue, int j_p, int m_p, int a_p)
  : Oeuvre(auteur, titre, sty, j, m, a, val),
    date_publication(j_p,m_p,a_p)
{ // appel constr de Oeuvre ET Date
  cout << "appel constructeur Ecrite" << endl;
  laLangue = langue;
  leTheme = theme;
  // pas besoin de modifier date_publication
}

Ecrite::~Ecrite()
{
  cout << "appel destructeur Ecrite" << endl;
}

string Ecrite::toString() const
{
  string affi = "Affichage de Ecrite : \n";
  affi += Oeuvre::toString(); // classe de base
  affi += "Langue ecrite :  " + laLangue +"\n";
  affi += "Theme         :  " + leTheme +"\n";
  affi += "Publie le     :  " + date_publication.toString()+"\n";
  return affi;
}

Ecrite::Ecrite(const Ecrite &e):Oeuvre(e),
				laLangue(e.laLangue),
				leTheme(e.leTheme){
  cout << "appel Constructeur par copie" << endl;
  //ma_date_creation = e.my_date_creation;
}
