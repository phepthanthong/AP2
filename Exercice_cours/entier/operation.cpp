#include "operation.h"
#include <iostream>
using namespace std;
entier::entier(){ //constructeur par defaut (sans parametre)
  ope_a=ope_b=0;
}
void entier::initialise(){
  int a,b;
  cout << "entrer a = "; cin >> a;
  cout << "entrer b = "; cin >> b;
  ope_a=a;
  ope_b=b;
}
void entier::additionner(){
  int resultat;
  resultat=ope_a+ope_b;
  cout << "a + b = " << resultat << endl;
}
void entier::soustraire(){
  int resultat;
  resultat=ope_a-ope_b;
  cout << "a - b = " << resultat << endl;
}
void entier::multiplier(){
  int resultat;
  resultat=ope_a*ope_b;
  cout << "a * b = " << resultat << endl;
}
void entier::diviser(){
  float resultat;
  if (ope_b==0)
    cout << "Erreur: b=0" << endl;
  else 
    resultat=ope_a/ope_b;
  cout << "a / b = " << resultat << endl;
}
entier operator+(const entier &p){
  entier resul;
  resul.ope_a = ope_a + p.ope_a;
  resul.ope_b = ope_b + p.ope_b;
  return resul;
}
