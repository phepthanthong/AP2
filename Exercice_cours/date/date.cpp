#include "date.h"
date::date(){
  cout << "Contructeur par defaut: Date" << endl;
  jour = new int;
  mois = new int;
  annee = new int;
}
date::date(int j, int m, int a){
  cout << "Constructeur avec parametre: Date" << endl;
  jour = new int;
  mois = new int;
  annee = new int;
  *jour=j;
  *mois=m;
  *annee=a;
}
date::date(const date &d){
  cout << "Constructeur par copie: Date" << endl;
  //jour = new int;
  // mois = new int;
  //annee = new int;
  jour=d.jour;
  mois=d.mois;
  annee=d.annee;
}
date::~date()
{
  cout << "Destructeur: Date" << endl;
}
void date::setDate(int j, int m, int a){
  *jour=j;
  *mois=m;
  *annee=a;
}
void date::afficheDate(){
  cout << "aujourd'hui c'est " 
       << *jour << "/" 
       << *mois << "/" 
       << *annee << endl;
}
int date::getJour()
{
  return *jour;
}
int date::getMois()
{
  return *mois;
}
int date::getAnnee()
{
  return *annee;
}
