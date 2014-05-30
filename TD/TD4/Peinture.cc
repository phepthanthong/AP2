// fichier Peinture.cc

#include <iostream>
#include <string>
#include "Peinture.h"
#include "Oeuvre.h"
#include "Date.h"
#include "util.h"

using namespace std;

Peinture::Peinture( string auteur, string titre, string sty,
                    int j, int m, int a, int val,
		    string possesseur, int jp, int mp, int ap,
		    string support, string matiere)
  : Plastique(auteur, titre, sty, j, m, a, val, possesseur,jp,mp,ap),
    my_date_acquis(jp,mp,ap)
{  // appel constr. cl. de base Oeuvre ET constr. Date
  cout << "appel constructeur Peinture..." << endl;
  my_possesseur = possesseur;
  leSupport = support;
  laMatiere = matiere;
  // pas besoin de modifier my_date_acquis
}

Peinture::~Peinture()
{
  cout << "appel destructeur Peinture..." << endl;
}

string
Peinture::toString() const
{
  string inf = "Affichage de Peinture :\n";
  inf += Plastique::toString();  // classe de base
  inf += "Possesseur   :  " + my_possesseur +"\n";
  inf += "Acquis(e) le :  " + my_date_acquis.toString()+"\n";
  inf += "Support      :  " + leSupport +"\n";
  inf += "Matiere      :  " + laMatiere +"\n";
  return inf;
}
void Peinture::setNouveauPoss(string poss){
  my_possesseur = poss;}
string Peinture::getNouveauPoss(){
  return my_possesseur;}
void Peinture::setNouvelleDate(int j,int m, int a){
  my_date_acquis.setDate(j,m,a);}
/* facon void
void getNouvelleDate( Date &d ){
  d = my_date_acquis;
}
*/
