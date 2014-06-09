#include "Date.h"

Date::Date(){
  my_jour = 1;
  my_mois = 1;
  my_annee = 0;
}

Date::Date(int j, int m, int a){
  if( j > 0 && j < 32)
    my_jour = j;
  else my_jour = 1;

  if(m > 0 && m < 13)
    my_mois = m;
  else my_mois = 1;

  if(a > 0)
    my_annee = a;
  else my_annee = 0;
}

Date::Date(const Date & d){
  my_jour = d.my_jour;
  my_mois = d.my_mois;
  my_annee = d.my_annee;
}

int Date::getJour() const {
  return my_jour;
}

int Date::getMois() const {
  return my_mois;
}

int Date::getAnnee() const {
  return my_annee;
}

void Date::setJour(int j){
  if(j > 0 && j < 32)
    my_jour = j;
}

void Date::setMois(int m){
  if(m > 0 && m < 13)
    my_mois = m;
}

void Date::setAnnee(int a){
  if(a > 0) my_annee = a;
}

bool Date::operator<=(const Date & autreDate) const {
  if(my_annee != autreDate.my_annee){
    // return (my_annee < autreDate.my_annee);
    if(my_annee < autreDate.my_annee)
      return true;
    else 
      return false;
  }
  else {
    if(my_mois != autreDate.my_mois)
      return my_mois < autreDate.my_mois;
    else 
      return my_jour <= autreDate.my_jour;
  }
}

bool Date::operator>=(const Date & autreDate) const {
  if(my_annee != autreDate.my_annee){
    // return (my_annee > autreDate.my_annee);
    if(my_annee > autreDate.my_annee)
      return true;
    else 
      return false;
  }
  else {
    if(my_mois != autreDate.my_mois)
      return my_mois > autreDate.my_mois;
    else 
      return my_jour >= autreDate.my_jour;
  }
}

bool Date::operator==(const Date & autreDate) const {
  return (my_annee == autreDate.my_annee && 
	   my_mois == autreDate.my_mois &&
	   my_jour == autreDate.my_jour);
}

void  Date::lendemain(){
  int j = my_jour;
  int m = my_mois;
  int a = my_annee;
  if(j == 28 && m == 2 && a%4!=0) {
    j = 1;
    m = 3;
  }
  else if(j == 29 && m == 2) {
    j = 1;
    m = 3;
  }
  else if(j == 30 && (m == 4 || m == 6 || m == 9 || m == 11)) {
    j = 1;
    m = m + 1; 
  }
  else if(j == 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)) {
    j = 1;
    m = m + 1; 
  }
  else if(j== 31 && m == 12) {
    j = 1;
    m = 1;
    a = a + 1;
  }
  else j = j + 1;
  my_jour = j;
  my_mois = m;
  my_annee = a;
}


