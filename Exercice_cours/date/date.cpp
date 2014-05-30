#include "date.h"
date::date(){
  jour = new int;
  mois = new int;
  annee = new int;
}
date::date(int j, int m, int a){
  jour = new int;
  mois = new int;
  annee = new int;
  *jour=j;
  *mois=m;
  *annee=a;
}
date::date(const date &d){
  jour = new int;
  mois = new int;
  annee = new int;
  *jour=d.*jour;
  *mois=d.*mois;
  *annee=d.*annee;
}
date::setDate(int j, int m, int a){
  *jour=j;
  *mois=m;
  *annee=a;
}
date::afficheDate(){
  cout << "aujourd'hui c'est " << *jour << *mois << *annee << endl;
}
