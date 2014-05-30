#include "date.h"
using namespace std;
Date::Date(){
  cout << "Constructeur par defaut" << endl;
  my_jour = 0;
  my_mois = 0;
  my_annee = 0;
}
Date::Date(int j, int m, int a)
{
  cout << "Contructeur avec parametre" << endl;
  if (j>0 && j<32)
    my_jour = j;
  else my_jour = 0;
  if (m>0 && m<13)
    my_mois = m;
  else my_mois = 0;
  my_annee = a;
}
int Date::getJour()const
{
  //cout << "Le jour est " << endl;
  return my_jour;
}
int Date::getMois()const
{
  //cout << "Le mois est " << endl; 
  return my_mois;
}
int Date::getAnnee()const
{
  //cout << "L'annee est " << endl;  
  return my_annee;
}
void Date::setDate(int jour, int mois, int annee)
{
  // verifier le mois de 1 a 12
  if(mois < 1 || mois > 12) 
    cerr << "Erreur: 1 <= Mois <= 12 " << endl; 
  // verifier le jour de 1 a 31
  if(jour < 1 || jour > 31) 
    cerr << "Erreur: 1 <= Jour <= 31 " << endl; 
  // Si le mois est egal a Avril, Mai, Septembre, Novembre
  if(mois==4 || mois==6 || mois==9 || mois==11)
    {
      if(jour > 30) 
	cerr << "Erreur: Jour < 30 " << endl; 
    }
  // Si c'est le mois Fevrier
  if(mois==2)
    {
      if((annee%4==0)&&(annee%100==0)&&(annee%400==0))
	if(jour > 29) 
	  cerr << "Erreur: Jour < 29 " << endl;
	else 
	  {
	    if(jour > 28) 
	      cerr << "Erreur: Jour > 28 " << endl;
	  }
    }
  // Si l'entree de la date est correcte
  my_jour = jour;
  my_mois = mois;
  my_annee = annee;
}
void Date::afficher()
{
 cout << "Aujourd'hui c'est " << getJour() << " " << getMois() << " " << getAnnee() << endl;
}
bool Date::operator>=(const Date & autreDate)const
{
  if (my_annee > autreDate.my_annee)
    return true;
  if (my_annee < autreDate.my_annee)
    return false;
  if (my_mois < autreDate.my_mois)
    return false;
  if (my_mois > autreDate.my_mois)
    return true;
  return my_jour >= autreDate.my_jour;
}
bool Date::operator<=(const Date & autreDate)const
{
  if (my_annee < autreDate.my_annee)
    return true;
  if (my_annee > autreDate.my_annee)
    return false;
  if (my_mois < autreDate.my_mois)
    return true;
  if (my_mois > autreDate.my_mois)
    return false;
  return my_jour <= autreDate.my_jour;
}
bool Date::operator==(const Date & autreDate)const
{
  if (my_annee == autreDate.my_annee &&
      my_mois == autreDate.my_mois &&
      my_jour == autreDate.my_jour)
    return true;
  else return false;
}
